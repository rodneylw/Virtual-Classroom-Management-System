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
USEFORM("AdministratorManageCourses.cpp", AdministratorManageCoursesForm);
USEFORM("AdministratorHome.cpp", AdministratorHomeForm);
USEFORM("AdministratorUIParent.cpp", AdministratorUIParentForm);
USEFORM("AdministratorUserAccounts.cpp", AdministratorUserAccountsForm);
USEFORM("InstructorUIParent.cpp", InstructorUIParentForm);
USEFORM("InstructorHome.cpp", InstructorHomeForm);
USEFORM("InstructorManageClasses.cpp", InstructorManageClassesForm);
USEFORM("InstructorResources.cpp", InstructorResourcesForm);
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
		Application->CreateForm(__classid(TInstructorUIParentForm), &InstructorUIParentForm);
		Application->CreateForm(__classid(TInstructorHomeForm), &InstructorHomeForm);
		Application->CreateForm(__classid(TInstructorManageClassesForm), &InstructorManageClassesForm);
		Application->CreateForm(__classid(TInstructorResourcesForm), &InstructorResourcesForm);
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

//Change User String Grid Option Buttons
	//Create Functionality

//GetActiveStringGrid();
