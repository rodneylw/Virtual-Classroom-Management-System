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
USEFORM("AdministratorUserAccounts.cpp", AdministratorUserAccountsForm);
USEFORM("AdministratorUIParent.cpp", AdministratorUIParentForm);
USEFORM("AdministratorHome.cpp", AdministratorHomeForm);
USEFORM("AdministratorManageCourses.cpp", AdministratorManageCoursesForm);
USEFORM("AdministratorStudentProgress.cpp", AdministratorStudentProgressForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TLoginForm), &LoginForm);
		Application->CreateForm(__classid(TSuperUserHomeForm), &SuperUserHomeForm);
		Application->CreateForm(__classid(TAdministratorUIParentForm), &AdministratorUIParentForm);
		Application->CreateForm(__classid(TAdministratorHomeForm), &AdministratorHomeForm);
		Application->CreateForm(__classid(TAdministratorUserAccountsForm), &AdministratorUserAccountsForm);
		Application->CreateForm(__classid(TAdministratorManageCoursesForm), &AdministratorManageCoursesForm);
		Application->CreateForm(__classid(TAdministratorStudentProgressForm), &AdministratorStudentProgressForm);
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
