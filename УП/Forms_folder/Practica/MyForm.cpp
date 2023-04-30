#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


int main() {			//автоматическая очистка элементов
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Practica::MyForm form;
	Application::Run(% form);
}
