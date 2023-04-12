//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("SuperUserHome.cpp", SuperUserHomeForm);
USEFORM("VirtualClassroomLogin.cpp", LoginForm);
USEFORM("AdministratorStudentProgress.cpp", AdministratorStudentProgressForm);
USEFORM("AdministratorUserAccounts.cpp", AdministratorUserAccountsForm);
USEFORM("AdministratorHome.cpp", AdministratorHomeForm);
USEFORM("AdministratorManageCourses.cpp", AdministratorManageCoursesForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TLoginForm), &LoginForm);
		Application->CreateForm(__classid(TSuperUserHomeForm), &SuperUserHomeForm);
		Application->CreateForm(__classid(TAdministratorUserAccountsForm), &AdministratorUserAccountsForm);
		Application->CreateForm(__classid(TAdministratorStudentProgressForm), &AdministratorStudentProgressForm);
		Application->CreateForm(__classid(TAdministratorHomeForm), &AdministratorHomeForm);
		Application->CreateForm(__classid(TAdministratorManageCoursesForm), &AdministratorManageCoursesForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
