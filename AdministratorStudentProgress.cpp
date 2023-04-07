//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AdministratorHome.h"
#include "AdministratorStudentProgress.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TAdministratorStudentProgressForm *AdministratorStudentProgressForm;
//---------------------------------------------------------------------------
__fastcall TAdministratorStudentProgressForm::TAdministratorStudentProgressForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAdministratorStudentProgressForm::FormClose(TObject *Sender, TCloseAction &Action)

{
     AdministratorHomeForm->Show();
}
//---------------------------------------------------------------------------

