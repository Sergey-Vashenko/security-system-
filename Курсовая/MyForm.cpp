#include "MyForm.h"
#pragma comment( lib, "Vfw32.lib")
#pragma comment( lib, "User32.lib")

using namespace System;
using namespace
System::Windows::Forms;
[STAThread]
void main(array<String^>^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Курсовая::MyForm form;
	Application::Run(%form);
}


