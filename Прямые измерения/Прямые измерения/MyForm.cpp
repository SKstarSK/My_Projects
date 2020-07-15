#include "MyForm.h"
#include <mscorlib.dll>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Прямыеизмерения::MyForm form;
	Application::Run(%form);
}
