#include "login.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ModifiedSarahaaGUI::login form;
    Application::Run(% form);
}