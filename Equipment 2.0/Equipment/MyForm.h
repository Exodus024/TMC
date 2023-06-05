#pragma once

namespace Equipment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_Id;

	private: System::Windows::Forms::TextBox^ textBox_Fullname_Employee;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView_Employee;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Button^ button_Delete_Employee;

	private: System::Windows::Forms::Button^ button_Edit_Employee;
	private: System::Windows::Forms::Button^ button_Add_Employee;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ComboBox^ comboBox;

	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_Cable;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown_ShoeCovers;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_Gloves;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_CrownBattery;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_SmallTies;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_LargeScreeds;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_Staples;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_Adapters;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_InsulationTape;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_Connectors;
	private: System::Windows::Forms::TextBox^ textBox_Box;



	private: System::Windows::Forms::TextBox^ textBox_Routers;

	private: System::Windows::Forms::TextBox^ textBox_SIMCards;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button_Apply;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog;
	private: System::Windows::Forms::ToolStripMenuItem^ просмотрToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сотрудникиСЛестницейToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сотрудникиСПерфораторомToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ всеСотрудникиToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^ comboBox_Drill;


	private: System::Windows::Forms::ComboBox^ comboBox_Ladder;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;


	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->просмотрToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->всеСотрудникиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сотрудникиСЛестницейToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сотрудникиСПерфораторомToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button_Delete_Employee = (gcnew System::Windows::Forms::Button());
			this->button_Edit_Employee = (gcnew System::Windows::Forms::Button());
			this->button_Add_Employee = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown_Id = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox_Fullname_Employee = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView_Employee = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_Box = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Routers = (gcnew System::Windows::Forms::TextBox());
			this->textBox_SIMCards = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_Cable = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_ShoeCovers = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_Gloves = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_CrownBattery = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_SmallTies = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_LargeScreeds = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_Staples = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_Adapters = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_InsulationTape = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_Connectors = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button_Apply = (gcnew System::Windows::Forms::Button());
			this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox_Ladder = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_Drill = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Id))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Employee))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Cable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_ShoeCovers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Gloves))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_CrownBattery))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_SmallTies))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_LargeScreeds))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Staples))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Adapters))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_InsulationTape))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Connectors))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->файлToolStripMenuItem,
					this->просмотрToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(782, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// просмотрToolStripMenuItem
			// 
			this->просмотрToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->всеСотрудникиToolStripMenuItem,
					this->сотрудникиСЛестницейToolStripMenuItem, this->сотрудникиСПерфораторомToolStripMenuItem
			});
			this->просмотрToolStripMenuItem->Name = L"просмотрToolStripMenuItem";
			this->просмотрToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->просмотрToolStripMenuItem->Text = L"Просмотр";
			// 
			// всеСотрудникиToolStripMenuItem
			// 
			this->всеСотрудникиToolStripMenuItem->Name = L"всеСотрудникиToolStripMenuItem";
			this->всеСотрудникиToolStripMenuItem->Size = System::Drawing::Size(236, 22);
			this->всеСотрудникиToolStripMenuItem->Text = L"Все сотрудники";
			this->всеСотрудникиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::всеСотрудникиToolStripMenuItem_Click);
			// 
			// сотрудникиСЛестницейToolStripMenuItem
			// 
			this->сотрудникиСЛестницейToolStripMenuItem->Name = L"сотрудникиСЛестницейToolStripMenuItem";
			this->сотрудникиСЛестницейToolStripMenuItem->Size = System::Drawing::Size(236, 22);
			this->сотрудникиСЛестницейToolStripMenuItem->Text = L"Сотрудники с лестницей";
			this->сотрудникиСЛестницейToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сотрудникиСЛестницейToolStripMenuItem_Click);
			// 
			// сотрудникиСПерфораторомToolStripMenuItem
			// 
			this->сотрудникиСПерфораторомToolStripMenuItem->Name = L"сотрудникиСПерфораторомToolStripMenuItem";
			this->сотрудникиСПерфораторомToolStripMenuItem->Size = System::Drawing::Size(236, 22);
			this->сотрудникиСПерфораторомToolStripMenuItem->Text = L"Сотрудники с перфоратором";
			this->сотрудникиСПерфораторомToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сотрудникиСПерфораторомToolStripMenuItem_Click);
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->открытьToolStripMenuItem,
					this->сохранитьToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 24);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(782, 594);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(774, 568);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Сотрудники";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button_Delete_Employee);
			this->groupBox3->Controls->Add(this->button_Edit_Employee);
			this->groupBox3->Controls->Add(this->button_Add_Employee);
			this->groupBox3->Location = System::Drawing::Point(326, 126);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(445, 81);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Действия";
			// 
			// button_Delete_Employee
			// 
			this->button_Delete_Employee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_Delete_Employee->Location = System::Drawing::Point(292, 24);
			this->button_Delete_Employee->Margin = System::Windows::Forms::Padding(2);
			this->button_Delete_Employee->Name = L"button_Delete_Employee";
			this->button_Delete_Employee->Size = System::Drawing::Size(118, 42);
			this->button_Delete_Employee->TabIndex = 2;
			this->button_Delete_Employee->Text = L"Удалить";
			this->button_Delete_Employee->UseVisualStyleBackColor = true;
			this->button_Delete_Employee->Click += gcnew System::EventHandler(this, &MyForm::button_Delete_Employee_Click);
			// 
			// button_Edit_Employee
			// 
			this->button_Edit_Employee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_Edit_Employee->Location = System::Drawing::Point(170, 24);
			this->button_Edit_Employee->Margin = System::Windows::Forms::Padding(2);
			this->button_Edit_Employee->Name = L"button_Edit_Employee";
			this->button_Edit_Employee->Size = System::Drawing::Size(118, 42);
			this->button_Edit_Employee->TabIndex = 1;
			this->button_Edit_Employee->Text = L"Узменить";
			this->button_Edit_Employee->UseVisualStyleBackColor = true;
			this->button_Edit_Employee->Click += gcnew System::EventHandler(this, &MyForm::button_Edit_Employee_Click);
			// 
			// button_Add_Employee
			// 
			this->button_Add_Employee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_Add_Employee->Location = System::Drawing::Point(47, 24);
			this->button_Add_Employee->Margin = System::Windows::Forms::Padding(2);
			this->button_Add_Employee->Name = L"button_Add_Employee";
			this->button_Add_Employee->Size = System::Drawing::Size(118, 42);
			this->button_Add_Employee->TabIndex = 0;
			this->button_Add_Employee->Text = L"Добавить";
			this->button_Add_Employee->UseVisualStyleBackColor = true;
			this->button_Add_Employee->Click += gcnew System::EventHandler(this, &MyForm::button_Add_Employee_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown_Id);
			this->groupBox2->Controls->Add(this->textBox_Fullname_Employee);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(325, 5);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(445, 116);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Поле ввода";
			// 
			// numericUpDown_Id
			// 
			this->numericUpDown_Id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_Id->Location = System::Drawing::Point(190, 28);
			this->numericUpDown_Id->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_Id->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65535, 0, 0, 0 });
			this->numericUpDown_Id->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_Id->Name = L"numericUpDown_Id";
			this->numericUpDown_Id->Size = System::Drawing::Size(141, 28);
			this->numericUpDown_Id->TabIndex = 3;
			this->numericUpDown_Id->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// textBox_Fullname_Employee
			// 
			this->textBox_Fullname_Employee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_Fullname_Employee->Location = System::Drawing::Point(190, 64);
			this->textBox_Fullname_Employee->Margin = System::Windows::Forms::Padding(2);
			this->textBox_Fullname_Employee->Name = L"textBox_Fullname_Employee";
			this->textBox_Fullname_Employee->Size = System::Drawing::Size(245, 28);
			this->textBox_Fullname_Employee->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(4, 68);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ФИО сотрудника:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(4, 30);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Номер сотрудника:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView_Employee);
			this->groupBox1->Location = System::Drawing::Point(4, 5);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(316, 561);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Поле вывода";
			// 
			// dataGridView_Employee
			// 
			this->dataGridView_Employee->AllowUserToAddRows = false;
			this->dataGridView_Employee->AllowUserToDeleteRows = false;
			this->dataGridView_Employee->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView_Employee->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Employee->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView_Employee->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView_Employee->Location = System::Drawing::Point(2, 15);
			this->dataGridView_Employee->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView_Employee->Name = L"dataGridView_Employee";
			this->dataGridView_Employee->RowHeadersWidth = 51;
			this->dataGridView_Employee->RowTemplate->Height = 24;
			this->dataGridView_Employee->Size = System::Drawing::Size(312, 544);
			this->dataGridView_Employee->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ФИО сотрудника";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 110;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(774, 568);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Оборудование";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->comboBox_Drill);
			this->groupBox5->Controls->Add(this->comboBox_Ladder);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->textBox_Box);
			this->groupBox5->Controls->Add(this->textBox_Routers);
			this->groupBox5->Controls->Add(this->textBox_SIMCards);
			this->groupBox5->Controls->Add(this->label15);
			this->groupBox5->Controls->Add(this->label14);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->numericUpDown_Cable);
			this->groupBox5->Controls->Add(this->numericUpDown_ShoeCovers);
			this->groupBox5->Controls->Add(this->numericUpDown_Gloves);
			this->groupBox5->Controls->Add(this->numericUpDown_CrownBattery);
			this->groupBox5->Controls->Add(this->numericUpDown_SmallTies);
			this->groupBox5->Controls->Add(this->numericUpDown_LargeScreeds);
			this->groupBox5->Controls->Add(this->numericUpDown_Staples);
			this->groupBox5->Controls->Add(this->numericUpDown_Adapters);
			this->groupBox5->Controls->Add(this->numericUpDown_InsulationTape);
			this->groupBox5->Controls->Add(this->numericUpDown_Connectors);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Location = System::Drawing::Point(4, 88);
			this->groupBox5->Margin = System::Windows::Forms::Padding(2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(2);
			this->groupBox5->Size = System::Drawing::Size(765, 479);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Оборудование закрепленное за сотрудником";
			// 
			// textBox_Box
			// 
			this->textBox_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_Box->Location = System::Drawing::Point(251, 427);
			this->textBox_Box->Margin = System::Windows::Forms::Padding(2);
			this->textBox_Box->Name = L"textBox_Box";
			this->textBox_Box->Size = System::Drawing::Size(494, 28);
			this->textBox_Box->TabIndex = 24;
			// 
			// textBox_Routers
			// 
			this->textBox_Routers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_Routers->Location = System::Drawing::Point(251, 395);
			this->textBox_Routers->Margin = System::Windows::Forms::Padding(2);
			this->textBox_Routers->Name = L"textBox_Routers";
			this->textBox_Routers->Size = System::Drawing::Size(494, 28);
			this->textBox_Routers->TabIndex = 23;
			// 
			// textBox_SIMCards
			// 
			this->textBox_SIMCards->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox_SIMCards->Location = System::Drawing::Point(251, 362);
			this->textBox_SIMCards->Margin = System::Windows::Forms::Padding(2);
			this->textBox_SIMCards->Name = L"textBox_SIMCards";
			this->textBox_SIMCards->Size = System::Drawing::Size(494, 28);
			this->textBox_SIMCards->TabIndex = 22;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(4, 430);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(111, 24);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Приставки:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(4, 397);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(92, 24);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Роутеры:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(4, 364);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(111, 24);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Cим-карты:";
			// 
			// numericUpDown_Cable
			// 
			this->numericUpDown_Cable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_Cable->Location = System::Drawing::Point(251, 328);
			this->numericUpDown_Cable->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_Cable->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_Cable->Name = L"numericUpDown_Cable";
			this->numericUpDown_Cable->Size = System::Drawing::Size(175, 28);
			this->numericUpDown_Cable->TabIndex = 19;
			// 
			// numericUpDown_ShoeCovers
			// 
			this->numericUpDown_ShoeCovers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_ShoeCovers->Location = System::Drawing::Point(251, 296);
			this->numericUpDown_ShoeCovers->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_ShoeCovers->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_ShoeCovers->Name = L"numericUpDown_ShoeCovers";
			this->numericUpDown_ShoeCovers->Size = System::Drawing::Size(175, 28);
			this->numericUpDown_ShoeCovers->TabIndex = 18;
			// 
			// numericUpDown_Gloves
			// 
			this->numericUpDown_Gloves->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_Gloves->Location = System::Drawing::Point(251, 262);
			this->numericUpDown_Gloves->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_Gloves->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_Gloves->Name = L"numericUpDown_Gloves";
			this->numericUpDown_Gloves->Size = System::Drawing::Size(175, 28);
			this->numericUpDown_Gloves->TabIndex = 17;
			// 
			// numericUpDown_CrownBattery
			// 
			this->numericUpDown_CrownBattery->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_CrownBattery->Location = System::Drawing::Point(251, 230);
			this->numericUpDown_CrownBattery->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_CrownBattery->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_CrownBattery->Name = L"numericUpDown_CrownBattery";
			this->numericUpDown_CrownBattery->Size = System::Drawing::Size(175, 28);
			this->numericUpDown_CrownBattery->TabIndex = 16;
			// 
			// numericUpDown_SmallTies
			// 
			this->numericUpDown_SmallTies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_SmallTies->Location = System::Drawing::Point(251, 197);
			this->numericUpDown_SmallTies->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_SmallTies->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_SmallTies->Name = L"numericUpDown_SmallTies";
			this->numericUpDown_SmallTies->Size = System::Drawing::Size(175, 28);
			this->numericUpDown_SmallTies->TabIndex = 15;
			// 
			// numericUpDown_LargeScreeds
			// 
			this->numericUpDown_LargeScreeds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_LargeScreeds->Location = System::Drawing::Point(251, 165);
			this->numericUpDown_LargeScreeds->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_LargeScreeds->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_LargeScreeds->Name = L"numericUpDown_LargeScreeds";
			this->numericUpDown_LargeScreeds->Size = System::Drawing::Size(175, 28);
			this->numericUpDown_LargeScreeds->TabIndex = 14;
			// 
			// numericUpDown_Staples
			// 
			this->numericUpDown_Staples->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_Staples->Location = System::Drawing::Point(251, 132);
			this->numericUpDown_Staples->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_Staples->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_Staples->Name = L"numericUpDown_Staples";
			this->numericUpDown_Staples->Size = System::Drawing::Size(175, 28);
			this->numericUpDown_Staples->TabIndex = 13;
			// 
			// numericUpDown_Adapters
			// 
			this->numericUpDown_Adapters->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_Adapters->Location = System::Drawing::Point(251, 99);
			this->numericUpDown_Adapters->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_Adapters->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_Adapters->Name = L"numericUpDown_Adapters";
			this->numericUpDown_Adapters->Size = System::Drawing::Size(175, 28);
			this->numericUpDown_Adapters->TabIndex = 12;
			// 
			// numericUpDown_InsulationTape
			// 
			this->numericUpDown_InsulationTape->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_InsulationTape->Location = System::Drawing::Point(251, 67);
			this->numericUpDown_InsulationTape->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_InsulationTape->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_InsulationTape->Name = L"numericUpDown_InsulationTape";
			this->numericUpDown_InsulationTape->Size = System::Drawing::Size(175, 28);
			this->numericUpDown_InsulationTape->TabIndex = 11;
			// 
			// numericUpDown_Connectors
			// 
			this->numericUpDown_Connectors->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown_Connectors->Location = System::Drawing::Point(251, 34);
			this->numericUpDown_Connectors->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown_Connectors->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_Connectors->Name = L"numericUpDown_Connectors";
			this->numericUpDown_Connectors->Size = System::Drawing::Size(175, 28);
			this->numericUpDown_Connectors->TabIndex = 10;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(5, 330);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(80, 24);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Кабель:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(4, 297);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(82, 24);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Бахилы:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(4, 264);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 24);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Перчатки:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(2, 232);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(167, 24);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Батарейка крона:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(4, 199);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(184, 24);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Маленькие стяжки:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(4, 167);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 24);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Большие стяжки:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(4, 134);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 24);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Скобы:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(4, 101);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(231, 24);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Переходники RJ45-RJ45:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(4, 67);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 24);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Изолента:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(4, 36);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Коннекторы:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button_Apply);
			this->groupBox4->Controls->Add(this->comboBox);
			this->groupBox4->Location = System::Drawing::Point(6, 5);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(764, 78);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Выберите сотрудника";
			// 
			// button_Apply
			// 
			this->button_Apply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Apply->Location = System::Drawing::Point(603, 17);
			this->button_Apply->Margin = System::Windows::Forms::Padding(2);
			this->button_Apply->Name = L"button_Apply";
			this->button_Apply->Size = System::Drawing::Size(140, 42);
			this->button_Apply->TabIndex = 1;
			this->button_Apply->Text = L"Применить";
			this->button_Apply->UseVisualStyleBackColor = true;
			this->button_Apply->Click += gcnew System::EventHandler(this, &MyForm::button_Apply_Click);
			// 
			// comboBox
			// 
			this->comboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox->FormattingEnabled = true;
			this->comboBox->Location = System::Drawing::Point(104, 24);
			this->comboBox->Margin = System::Windows::Forms::Padding(2);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(455, 30);
			this->comboBox->TabIndex = 0;
			this->comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_SelectedIndexChanged);
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog1";
			this->openFileDialog->Filter = L"Текстовые файлы|*.txt";
			// 
			// saveFileDialog
			// 
			this->saveFileDialog->Filter = L"Текстовые файлы|*.txt";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(460, 74);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(128, 24);
			this->label16->TabIndex = 26;
			this->label16->Text = L"Перфоратор:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(460, 36);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(101, 24);
			this->label17->TabIndex = 25;
			this->label17->Text = L"Лестница:";
			// 
			// comboBox_Ladder
			// 
			this->comboBox_Ladder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox_Ladder->FormattingEnabled = true;
			this->comboBox_Ladder->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"нет", L"есть" });
			this->comboBox_Ladder->Location = System::Drawing::Point(616, 32);
			this->comboBox_Ladder->Name = L"comboBox_Ladder";
			this->comboBox_Ladder->Size = System::Drawing::Size(129, 32);
			this->comboBox_Ladder->TabIndex = 27;
			// 
			// comboBox_Drill
			// 
			this->comboBox_Drill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox_Drill->FormattingEnabled = true;
			this->comboBox_Drill->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"нет", L"есть" });
			this->comboBox_Drill->Location = System::Drawing::Point(616, 70);
			this->comboBox_Drill->Name = L"comboBox_Drill";
			this->comboBox_Drill->Size = System::Drawing::Size(129, 32);
			this->comboBox_Drill->TabIndex = 28;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 618);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Оборудование сотрудников";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Id))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Employee))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Cable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_ShoeCovers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Gloves))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_CrownBattery))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_SmallTies))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_LargeScreeds))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Staples))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Adapters))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_InsulationTape))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Connectors))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: void ViewData();
private: void ViewDataById();

private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void всеСотрудникиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void сотрудникиСЛестницейToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void сотрудникиСПерфораторомToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Add_Employee_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Edit_Employee_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Delete_Employee_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Apply_Click(System::Object^ sender, System::EventArgs^ e);
};
}
