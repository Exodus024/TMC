#include "MyForm.h"
#include "EQ_Sys.h"
#include "Utilities.h"

using namespace System;
using namespace System::Windows::Forms;

[System::Runtime::InteropServices::DllImport("user32.dll")]
bool SetProcessDPIAware();

[STAThreadAttribute]
void main() {
    if (Environment::OSVersion->Version->Major >= 6)
        SetProcessDPIAware();

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(true);

    Equipment::MyForm form;
    Application::Run(% form);
}

EmployeeList _data;
std::vector<int> ids;

Equipment::MyForm::MyForm(void)
{
    InitializeComponent();
    dataGridView_Employee->TopLeftHeaderCell->Value = "Код";
}

void Equipment::MyForm::ViewData()
{
    try {
        dataGridView_Employee->Rows->Clear();
        comboBox->Items->Clear();

        int i = 0;
        for (Employee d : _data.Data()) {
            dataGridView_Employee->Rows->Add(Utilities::ConvertToString(d.name));
            dataGridView_Employee->Rows[i++]->HeaderCell->Value = d.id.ToString();

            comboBox->Items->Add(Utilities::ConvertToString(d.name));
        }
    }
    catch (std::exception ex) {
        std::string what = ex.what();
        MessageBox::Show("Сообщение: " + Utilities::ConvertToString(what), "Вызвано исключение!");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message, "Вызвано исключение!");
    }
}

void Equipment::MyForm::ViewDataById()
{
    if (ids.size() == 0) {
        MessageBox::Show("Результат пуст!","Внимание!");
        return;
    }

    try {
        dataGridView_Employee->Rows->Clear();

        int i = 0;
        for (Employee d : _data.Data()) {
            if (std::find(ids.begin(), ids.end(), d.id) != ids.end()) {
                dataGridView_Employee->Rows->Add(Utilities::ConvertToString(d.name));
                dataGridView_Employee->Rows[i++]->HeaderCell->Value = d.id.ToString();
            }            
        }
    }
    catch (std::exception ex) {
        std::string what = ex.what();
        MessageBox::Show("Сообщение: " + Utilities::ConvertToString(what), "Вызвано исключение!");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message, "Вызвано исключение!");
    }
}

System::Void Equipment::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void Equipment::MyForm::всеСотрудникиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    try {
        ViewData();
    }
    catch (std::exception ex) {
        std::string what = ex.what();
        MessageBox::Show("Сообщение: " + Utilities::ConvertToString(what), "Вызвано исключение!");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message, "Вызвано исключение!");
    }
}

System::Void Equipment::MyForm::сотрудникиСЛестницейToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    try {
        ids.clear();
        ids = _data.checkLadder();
        ViewDataById();
    }
    catch (std::exception ex) {
        std::string what = ex.what();
        MessageBox::Show("Сообщение: " + Utilities::ConvertToString(what), "Вызвано исключение!");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message, "Вызвано исключение!");
    }
}

System::Void Equipment::MyForm::сотрудникиСПерфораторомToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    try {
        ids.clear();
        ids = _data.checkDrill();
        ViewDataById();
    }
    catch (std::exception ex) {
        MessageBox::Show("Сообщение: " + Convert::ToString(ex.what()), "Вызвано исключение!");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message, "Вызвано исключение!");
    }
}

System::Void Equipment::MyForm::открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    try {
        if (openFileDialog->ShowDialog() != Windows::Forms::DialogResult::OK)
            return;

        std::string fname = Utilities::ConvertToString(openFileDialog->FileName);
        _data.listLoad(fname);
        ViewData();
    }
    catch (std::exception ex) {
        std::string what = ex.what();
        MessageBox::Show("Сообщение: " + Utilities::ConvertToString(what), "Вызвано исключение!");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message,"Вызвано исключение!");
    }
}

System::Void Equipment::MyForm::сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    try {
        if (saveFileDialog->ShowDialog() != Windows::Forms::DialogResult::OK)
            return;

        std::string fname = Utilities::ConvertToString(saveFileDialog->FileName);
        _data.listSave(fname);
    }
    catch (std::exception ex) {
        std::string what = ex.what();
        MessageBox::Show("Сообщение: " + Utilities::ConvertToString(what), "Вызвано исключение!");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message, "Вызвано исключение!");
    }
}

System::Void Equipment::MyForm::comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    int index = comboBox->SelectedIndex;
    if (index == -1)
        return;

    try {
        SEquipment equipment = _data.employeeInfo(_data.Data()[index].id);

        numericUpDown_Connectors->Value = equipment.connectors;
        numericUpDown_InsulationTape->Value = equipment.insulation;
        numericUpDown_Adapters->Value = equipment.RJ45;
        numericUpDown_Staples->Value = equipment.clips;
        numericUpDown_LargeScreeds->Value = equipment.large_ties;
        numericUpDown_SmallTies->Value = equipment.small_ties;
        numericUpDown_CrownBattery->Value = equipment.battery;
        numericUpDown_Gloves->Value = equipment.gloves;
        numericUpDown_ShoeCovers->Value = equipment.shoe_covers;
        numericUpDown_Cable->Value = equipment.cable;

        (equipment.ladder == true) ?
            comboBox_Ladder->SelectedIndex = 1 :
            comboBox_Ladder->SelectedIndex = 0;

        (equipment.drill == true) ?
            comboBox_Drill->SelectedIndex = 1 :
            comboBox_Drill->SelectedIndex = 0;

        std::string sim = "отсутствуют";
        if (equipment.sim.size() != 0) {
            sim = ""; 
            for (string s : equipment.sim) {
                sim += s + " ";
            }
        }

        std::string router = "отсутствует";
        if (equipment.router.size() != 0) {
            router = "";
            for (string s : equipment.router) {
                router += s + " ";
            }
        }

        std::string box = "отсутствует";
        if (equipment.box.size() != 0) {
            box = "";
            for (string s : equipment.box) {
                box += s + " ";
            }
        }

        textBox_SIMCards->Text = Utilities::ConvertToString(sim);
        textBox_Routers->Text = Utilities::ConvertToString(router);
        textBox_Box->Text = Utilities::ConvertToString(box);
    }
    catch (std::exception ex) {
        std::string what = ex.what();
        MessageBox::Show("Сообщение: " + Utilities::ConvertToString(what), "Вызвано исключение!"); 
    }
    catch (Exception^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message, "Вызвано исключение!");
    }
}

System::Void Equipment::MyForm::button_Add_Employee_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox_Fullname_Employee->Text == "") {
        MessageBox::Show("Не все поля введены!","Внимание!");
        return;
    }

    try {
        int id = Convert::ToInt32(numericUpDown_Id->Value);
        string name = Utilities::ConvertToString(textBox_Fullname_Employee->Text);

        _data.employeeInsert(id, name);
        ViewData();
    }
    catch (std::exception ex) {
        std::string what = ex.what();
        MessageBox::Show("Сообщение: " + Utilities::ConvertToString(what), "Вызвано исключение!");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message, "Вызвано исключение!");
    }
}

System::Void Equipment::MyForm::button_Edit_Employee_Click(System::Object^ sender, System::EventArgs^ e)
{
    int index = dataGridView_Employee->CurrentRow->Index;
    if (index == -1)
        return;

    if (textBox_Fullname_Employee->Text == "") {
        MessageBox::Show("Не все поля введены!", "Внимание!");
        return;
    }

    try {
        int id = Convert::ToInt32(numericUpDown_Id->Value);
        string name = Utilities::ConvertToString(textBox_Fullname_Employee->Text);

        _data[index].id = id;
        _data[index].name = name;
        ViewData();
    }
    catch (std::exception ex) {
        std::string what = ex.what();
        MessageBox::Show("Сообщение: " + Utilities::ConvertToString(what), "Вызвано исключение!");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message, "Вызвано исключение!");
    }
}

System::Void Equipment::MyForm::button_Delete_Employee_Click(System::Object^ sender, System::EventArgs^ e)
{
    int index = Convert::ToInt32(numericUpDown_Id->Value);
    if (index == -1)
        return;

    try {
        _data.employeeDelete(_data[index].id);
        ViewData();
    }
    catch (std::exception ex) {
        std::string what = ex.what();
        MessageBox::Show("Сообщение: " + Utilities::ConvertToString(what), "Вызвано исключение!");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message, "Вызвано исключение!");
    }
}

System::Void Equipment::MyForm::button_Apply_Click(System::Object^ sender, System::EventArgs^ e)
{
    int index = comboBox->SelectedIndex;
    if (index == -1)
        return;

    try {
        SEquipment d;
        d.connectors = Convert::ToInt32(numericUpDown_Connectors->Value);
        d.insulation = Convert::ToInt32(numericUpDown_InsulationTape->Value);
        d.RJ45 = Convert::ToInt32(numericUpDown_Adapters->Value);
        d.clips = Convert::ToInt32(numericUpDown_Staples->Value);
        d.large_ties = Convert::ToInt32(numericUpDown_LargeScreeds->Value);
        d.small_ties = Convert::ToInt32(numericUpDown_SmallTies->Value);
        d.battery = Convert::ToInt32(numericUpDown_CrownBattery->Value);
        d.gloves = Convert::ToInt32(numericUpDown_Gloves->Value);
        d.shoe_covers = Convert::ToInt32(numericUpDown_ShoeCovers->Value);
        d.cable = Convert::ToInt32(numericUpDown_Cable->Value);

        d.sim = Utilities::SplitString(Utilities::ConvertToString(textBox_SIMCards->Text), ' ');
        d.router = Utilities::SplitString(Utilities::ConvertToString(textBox_Routers->Text), ' ');
        d.box = Utilities::SplitString(Utilities::ConvertToString(textBox_Box->Text), ' ');

        (comboBox_Ladder->SelectedIndex == 1) ?
            d.ladder = true :
            d.ladder = false;

        (comboBox_Drill->SelectedIndex == 1) ?
            d.drill = true :
            d.drill = false;

        _data[index].SetEquipment(d);
    }
    catch (std::exception ex) { 
        std::string what = ex.what();
        MessageBox::Show("Сообщение: " + Utilities::ConvertToString(what), "Вызвано исключение!");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Сообщение: " + ex->Message, "Вызвано исключение!");
    }
}
