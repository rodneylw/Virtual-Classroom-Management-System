//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AdministratorStudentProgress.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "AdministratorUIParent"
#pragma resource "*.fmx"
TAdministratorStudentProgressForm *AdministratorStudentProgressForm;
//---------------------------------------------------------------------------
__fastcall TAdministratorStudentProgressForm::TAdministratorStudentProgressForm(TComponent* Owner)
	: TAdministratorUIParentForm(Owner)
{
}
//---------------------------------------------------------------------------
