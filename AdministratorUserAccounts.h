//---------------------------------------------------------------------------

#ifndef AdministratorUserAccountsH
#define AdministratorUserAccountsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include "AdministratorUIParent.h"
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Grid.Style.hpp>
#include <FMX.ScrollBox.hpp>
#include <System.Rtti.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <vector>

#include "User.h"
//---------------------------------------------------------------------------
class TAdministratorUserAccountsForm : public TAdministratorUIParentForm
{
__published:	// IDE-managed Components
	TVertScrollBox *UserAccountsScrollBox;
	TStringGrid *AdministratorAccountsStringGrid;
	TStringColumn *StringColumn1;
	TStringColumn *StringColumn2;
	TStringColumn *StringColumn3;
	TStringColumn *StringColumn4;
	TStringColumn *StringColumn5;
	TStringColumn *StringColumn6;
	TStringColumn *StringColumn7;
	TStyleBook *StyleBook1;
	TStringColumn *StringColumn8;
	TImage *UserTypeSelectionContainer;
	TImage *UserTypeSelectionDropDownIndicator;
	TText *UserTypeSelectionText;
	TRectangle *UserTypeSelector;
	TLayout *Content;
	TLayout *CreateNewSection;
	TLine *VerticleDivider;
	TText *CreateNewText;
	TButton *CreateAdministratorButton;
	TLayout *JobTitleLayout;
	TLabel *JobTitleLabel;
	TEdit *JobTitleEdit;
	TLayout *EmailLayout;
	TEdit *EmailEdit;
	TLabel *EmailLabel;
	TLayout *FirstNameLayout;
	TLayout *PasswordLayout;
	TLabel *PasswordLabel;
	TEdit *PasswordEdit;
	TLabel *FirstNameLabel;
	TEdit *FirstNameEdit;
	TLayout *LastNameLayout;
	TLabel *LastNameLabel;
	TEdit *LastNameEdit;
	TLayout *BirthdateLayout;
	TLayout *SecurityAnswerLayout;
	TLayout *SecurityQuestionLayout;
	TLayout *GenderLayout;
	TLayout *AddressLayout;
	TLayout *PhoneNumberLayout;
	TLabel *BirthdateLabel;
	TEdit *BirthdateEdit;
	TLabel *PhoneNumberLabel;
	TLabel *AddressLabel;
	TLabel *GenderLabel;
	TLabel *SecurityQuestionLabel;
	TLabel *SecurityAnswerLabel;
	TEdit *PhoneNumberEdit;
	TEdit *AddressEdit;
	TEdit *GenderEdit;
	TEdit *SecurityQuestionEdit;
	TEdit *SecurityAnswerEdit;
	TImage *UserTypePopupMenu;
	TRectangle *UserTypePopupMenuBackground;
	TRectangle *StudentSelector;
	TRectangle *InstructorSelector;
	TText *InsutrctorUserStype;
	TText *StudentUserType;
	TRectangle *AdministratorSelector;
	TText *AdministratorUserType;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall AdministratorAccountsStringGridDrawColumnHeader(TObject *Sender, TCanvas * const Canvas,
          TColumn * const Column, const TRectF &Bounds);
	void __fastcall CreateAdministratorButtonClick(TObject *Sender);
	void __fastcall UserTypeSelectorClick(TObject *Sender);
	void __fastcall AdministratorSelectorMouseEnter(TObject *Sender);
	void __fastcall AdministratorSelectorMouseLeave(TObject *Sender);
	void __fastcall AdministratorSelectorClick(TObject *Sender);
	void __fastcall InstructorSelectorMouseEnter(TObject *Sender);
	void __fastcall InstructorSelectorMouseLeave(TObject *Sender);
	void __fastcall InstructorSelectorClick(TObject *Sender);
	void __fastcall StudentSelectorMouseEnter(TObject *Sender);
	void __fastcall StudentSelectorMouseLeave(TObject *Sender);
	void __fastcall StudentSelectorClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAdministratorUserAccountsForm(TComponent* Owner);
    void __fastcall ClearCreateEdits();
	void __fastcall PopulateGridWithAdministrators(const std::vector<std::unique_ptr<User>>& administrators);
    void __fastcall TAdministratorUserAccountsForm::AdjustColumnWidths();
};
//---------------------------------------------------------------------------
extern PACKAGE TAdministratorUserAccountsForm *AdministratorUserAccountsForm;
//---------------------------------------------------------------------------
#endif
