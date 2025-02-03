#include "LoginSelectionForm.h"
#include "AdLoginForm.h"
#include "AdminWorkspaceForm.h"
#include "AddForm.h"
#include "SLoginForm.h"
#include "StudentWorkspaceForm.h"
#include "SloginForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]


int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FarabiStudents::LoginSelectionForm loginForm;
	FarabiStudents::AdLoginForm adloginForm;
	FarabiStudents::AdminWorkspaceForm adworkForm;
	FarabiStudents::AddForm addForm;
	FarabiStudents::SLoginForm studentLoginForm;
	FarabiStudents::StudentWorkspaceForm swf;
	FarabiStudents::SLoginForm slf;

	while (true)
	{
		loginForm.ShowDialog();
		if (loginForm.adminlogin)
		{

			adloginForm.ShowDialog();
			if (adloginForm.isLoginValid)
			{
				adworkForm.ShowDialog();
			}


			break;

		}
		else if (loginForm.studentlogin)
		{
			slf.ShowDialog();
			if (slf.isLoginValid)
			{
				swf.ShowDialog();
			}


			break;
		}
		else
			break;
		
	}
}
