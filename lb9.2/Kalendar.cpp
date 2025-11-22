#include "Kalendar.h"
#include <Windows.h>

using namespace System;
using namespace lb92;
[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Kalendar());
    return 0;
}