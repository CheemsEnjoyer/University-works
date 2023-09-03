#include "MainForm.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	hospital::MainForm form;
	Application::Run(% form);
}