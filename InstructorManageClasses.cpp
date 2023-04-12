//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "InstructorManageClasses.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "InstructorUIParent"
#pragma resource "*.fmx"
TInstructorManageClassesForm *InstructorManageClassesForm;
//---------------------------------------------------------------------------
__fastcall TInstructorManageClassesForm::TInstructorManageClassesForm(TComponent* Owner)
	: TInstructorUIParentForm(Owner)
{
}
//---------------------------------------------------------------------------
