//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AdministratorManageCourses.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdministratorUIParent"
#pragma resource "*.fmx"
TAdministratorManageCoursesForm *AdministratorManageCoursesForm;
//---------------------------------------------------------------------------
__fastcall TAdministratorManageCoursesForm::TAdministratorManageCoursesForm(TComponent* Owner)
	: TAdministratorUIParentForm(Owner)
{
}
//---------------------------------------------------------------------------
