//---------------------------------------------------------------------------

#ifndef AdministratorStudentProgressH
#define AdministratorStudentProgressH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
//---------------------------------------------------------------------------
class TAdministratorStudentProgressForm : public TForm
{
__published:	// IDE-managed Components
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TAdministratorStudentProgressForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdministratorStudentProgressForm *AdministratorStudentProgressForm;
//---------------------------------------------------------------------------
#endif
