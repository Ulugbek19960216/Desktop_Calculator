//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

Double entry1, entry2, result;
String operates;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------














void __fastcall TForm2::ClickNumeric(TObject *Sender)
{
	TButton* btn = (( TButton*)Sender);



	if (txtResult->Text == '0') {

		txtResult->Text = btn->Caption;

	}  else {

		txtResult->Text = txtResult->Text + btn->Caption;
    }
}