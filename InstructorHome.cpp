//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "InstructorHome.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "InstructorUIParent"
#pragma resource "*.fmx"
TInstructorHomeForm *InstructorHomeForm;
//---------------------------------------------------------------------------
__fastcall TInstructorHomeForm::TInstructorHomeForm(TComponent* Owner)
	: TInstructorUIParentForm(Owner)
{
}
//---------------------------------------------------------------------------
