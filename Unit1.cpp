//---------------------------------------------------------------------------

#include <vcl.h>
#include <string>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------



//---------------------------------------------------------------------------
void __fastcall TForm1::Button17Click(TObject* Sender)
{
  Edit1->Text = Edit1->Text.ToInt() + 1;       // automatic conversion from int
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button11Click(TObject* Sender)
{
  Edit1->Text = Edit1->Text.ToInt() - 1;       // automatic conversion from int
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
void __fastcall TForm1::Button_Click(TObject* Sender)
{
	Edit1->Text = static_cast<TButton*>(Sender)->Caption;
}
//---------------------------------------------------------------------------




