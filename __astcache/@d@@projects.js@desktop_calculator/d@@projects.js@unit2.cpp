﻿//---------------------------------------------------------------------------

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
} 
//---------------------------------------------------------------------------






void __fastcall TForm2::ClickOperatorFunction(TObject *Sender)
{

		TButton* btn = (( TButton*)Sender);

		entry1 = txtResult->Text.ToDouble();
		operates = btn->Caption;
		txtResult->Text = "";

}
//---------------------------------------------------------------------------

void __fastcall TForm2::btnEqualsClickFunction(TObject *Sender)
{
				 entry2 = txtResult->Text.ToDouble();

				 if (operates == "+") {

					result = entry1 + entry2;

				 }  else if( operates == "-") {

					result = entry1 - entry2;

				 }    else if( operates == "x" ) {

					result = entry1 * entry2;

				 }   else if( operates == "÷" ) {

				 // added checking for division by zero
					if(entry2 != 0) {

						result = entry1 / entry2;

					} else {

						ShowMessage("Error: Division by zero");
				 // if it divison by zero then show error message and make the input zero "0"
						txtResult->Text = "0";
                        return;
                    }


				 }

				 txtResult->Text = result;
}

//---------------------------------------------------------------------------


void __fastcall TForm2::btnDotClick(TObject *Sender)
{

	if(!txtResult->Text.Pos(".")) {

		txtResult->Text = txtResult->Text + ".";
    }


}
//---------------------------------------------------------------------------

void __fastcall TForm2::btnBackSpaceClick(TObject *Sender)
{
	int k = txtResult->Text.Length();

	if( k == 1 ) {

		txtResult->Text = "0";

	}  else {


		String del = txtResult->Text.Delete(k, 1);

        txtResult->Text = del;

    }
}
//---------------------------------------------------------------------------


void __fastcall TForm2::btnClearEntryClick(TObject *Sender)
{
	txtResult->Text = "";

	String x, y;

	x = entry1;
	y = entry2;


	x = "";
	y = "";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::btnClearClick(TObject *Sender)
{
		txtResult->Text = "0";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::btnPlusMinusFunction(TObject *Sender)
{
		Double b = ( txtResult->Text.ToDouble());

		txtResult->Text = (-1 * b);
}
//---------------------------------------------------------------------------

