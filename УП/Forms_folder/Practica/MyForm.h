#pragma once
#include "Form2.h"
#include "ViewEquipment.h"
#include "InfoStapladder.h"
#include "InfoPerf.h"



namespace Practica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(98, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выдача ТМЦ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(288, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Посмотреть оборудование";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(98, 306);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 46);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Информация о лестнице";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(288, 306);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 46);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Информация о перфораторе";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(133, 97);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->ClientSize = System::Drawing::Size(537, 442);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Контроль оборудования";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		public: System::Void Form_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
			System::String^ settingsFile = System::Windows::Forms::Application::LocalUserAppDataPath + "config.txt";
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(settingsFile);
			writer->WriteLine(checkBox1->Checked);
			writer->Close();
		}
	   public: System::Void Form_Load(System::Object^ sender, System::EventArgs^ e) {
		   System::String^ settingsFile = System::Windows::Forms::Application::LocalUserAppDataPath + "config.txt";
		   if (System::IO::File::Exists(settingsFile)) {
			   System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(settingsFile);
			   checkBox1->Checked = Convert::ToBoolean(reader->ReadLine());
			   reader->Close();
		   }
	   }
#pragma endregion

		Form2^ form2 = gcnew Form2();
		ViewEquipment^ form3 = gcnew ViewEquipment();
		InfoStapladder^ form4 = gcnew InfoStapladder();
		InfoPerf^ form5 = gcnew InfoPerf();
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		form2->Owner = this;
		this->Hide(); // скрытие первой формы
		form2->ShowDialog(); // открытие второй формы
		// закрытие второй формы
		this->Show(); // отображение первой формы
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		form3->Owner = this;
		this->Hide();
		form3->ShowDialog();
		this->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		form4->Owner = this;
		this->Hide();
		form4->ShowDialog();
		this->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		form5->Owner = this;
		this->Hide();
		form5->ShowDialog();
		this->Show();
	}
	};
}
