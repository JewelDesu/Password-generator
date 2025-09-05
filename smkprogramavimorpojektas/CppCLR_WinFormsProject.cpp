#include "pch.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form.h"
#include "Form5.h"
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"
#include "Form6.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  /*
  Application::Run(gcnew CppCLRWinFormsProject::Form2());
  Application::Run(gcnew CppCLRWinFormsProject::Form3());
  Application::Run(gcnew CppCLRWinFormsProject::Form4());
  Application::Run(gcnew CppCLRWinFormsProject::Form5());
  */
  return 0;
}