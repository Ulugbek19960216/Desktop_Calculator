# Desktop_Calculator C++ builder

# Unit_2.h file source code:

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TButton *btnClear;
	TButton *btnPlusMinus;
	TButton *btnSeven;
	TButton *btnEight;
	TButton *btnNine;
	TButton *btnMultiply;
	TButton *btnFour;
	TButton *btnFive;
	TButton *btnSix;
	TButton *btnAdd;
	TButton *btnOne;
	TButton *btnTwo;
	TButton *btnThree;
	TButton *btnSub;
	TButton *btnZero;
	TButton *btnDot;
	TButton *btnEquall;
	TButton *btnBackSpace;
	TButton *btnDiv;
	TButton *btnClearEntry;
	TEdit *txtResult;
	void __fastcall ClickNumeric(TObject *Sender);
	void __fastcall ClickOperatorFunction(TObject *Sender);
	void __fastcall btnEqualsClickFunction(TObject *Sender);
	void __fastcall btnDotClick(TObject *Sender);
	void __fastcall btnBackSpaceClick(TObject *Sender);
	void __fastcall btnClearEntryClick(TObject *Sender);
	void __fastcall btnClearClick(TObject *Sender);
	void __fastcall btnPlusMinusFunction(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif

# Unit_2.cpp file source code: 
//---------------------------------------------------------------------------
// Header includes and pragma directives
#include <vcl.h>
#pragma hdrstop

// Include the header file for the form
#include "Unit2.h"
//---------------------------------------------------------------------------

#pragma package(smart_init)
#pragma resource "*.dfm"
// Create an instance of the form
TForm2 *Form2;

// Declare variables for calculations
Double entry1, entry2, result;
String operates;
//---------------------------------------------------------------------------

// Constructor for the form
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

// Event handler for numeric buttons
void __fastcall TForm2::ClickNumeric(TObject *Sender)
{
	TButton* btn = ((TButton*)Sender);

	// Check if the current text is '0' and update accordingly
	if (txtResult->Text == '0') {
		txtResult->Text = btn->Caption;
	} else {
		txtResult->Text = txtResult->Text + btn->Caption;
    }
}

// Event handler for operator buttons
void __fastcall TForm2::ClickOperatorFunction(TObject *Sender)
{
	TButton* btn = ((TButton*)Sender);

	// Store the current entry, operator, and clear the text box
	entry1 = txtResult->Text.ToDouble();
	operates = btn->Caption;
	txtResult->Text = "";
}

// Event handler for equals button
void __fastcall TForm2::btnEqualsClickFunction(TObject *Sender)
{
	// Get the second entry
	entry2 = txtResult->Text.ToDouble();

	// Perform the calculation based on the operator
	if (operates == "+") {
		result = entry1 + entry2;
	} else if (operates == "-") {
		result = entry1 - entry2;
	} else if (operates == "x") {
		result = entry1 * entry2;
	} else if (operates == "÷") {
		// Check for division by zero
		if (entry2 != 0) {
			result = entry1 / entry2;
		} else {
			ShowMessage("Error: Division by zero");
			// Clear the input on error
			txtResult->Text = "0";
			return;
		}
	}

	// Display the result
	txtResult->Text = result;
}
//---------------------------------------------------------------------------

// Event handler for the dot button
void __fastcall TForm2::btnDotClick(TObject *Sender)
{
	// Check if the current text contains a dot
	if (!txtResult->Text.Pos(".")) {
		txtResult->Text = txtResult->Text + ".";
    }
}
//---------------------------------------------------------------------------

// Event handler for the backspace button
void __fastcall TForm2::btnBackSpaceClick(TObject *Sender)
{
	int k = txtResult->Text.Length();

	// Check if there is only one character
	if (k == 1) {
		txtResult->Text = "0";
	} else {
		// Delete the last character
		String del = txtResult->Text.Delete(k, 1);
        txtResult->Text = del;
    }
}
//---------------------------------------------------------------------------

// Event handler for the clear entry button
void __fastcall TForm2::btnClearEntryClick(TObject *Sender)
{
	// Clear the text box and reset variables
	txtResult->Text = "";
	String x, y;
	x = entry1;
	y = entry2;
	x = "";
	y = "";
}
//---------------------------------------------------------------------------

// Event handler for the clear button
void __fastcall TForm2::btnClearClick(TObject *Sender)
{
	// Clear the text box and set it to '0'
	txtResult->Text = "0";
}
//---------------------------------------------------------------------------

// Event handler for the plus-minus button
void __fastcall TForm2::btnPlusMinusFunction(TObject *Sender)
{
	// Negate the current value
	Double b = (txtResult->Text.ToDouble());
	txtResult->Text = (-1 * b);
}
//---------------------------------------------------------------------------
