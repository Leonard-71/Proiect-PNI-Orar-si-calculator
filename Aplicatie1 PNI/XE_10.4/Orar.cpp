//---------------------------------------------------------------------------

#include <vcl.h>
#include<fstream>
#pragma hdrstop

#include "Orar.h"
ifstream fis("orar.txt");
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

      ComboBox1->Items->Add("08-10");
ComboBox1->Items->Add("10-12");
ComboBox1->Items->Add("12-14");
ComboBox1->Items->Add("14-16");
ComboBox1->Items->Add("16-18");
ComboBox1->Items->Add("18-20");
ListBox1->Items->Add("Luni");
ListBox1->Items->Add("Marti");
ListBox1->Items->Add("Miercuri");
ListBox1->Items->Add("Joi");
ListBox1->Items->Add("Vineri");
ListBox1->Items->Add("Sambata");


}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
char s[100];
int i,j, nr=0;
StringGrid1->RowCount =7;
StringGrid1->Cells[1][0] = "08 - 10";
StringGrid1->Cells[2][0] = "10 - 12";
StringGrid1->Cells[3][0] = "12 - 14";
StringGrid1->Cells[4][0] = "14 - 16";
StringGrid1->Cells[5][0] = "16 - 18";
StringGrid1->Cells[6][0] = "18 - 20";
StringGrid1->Cells[0][1] = "Luni";
StringGrid1->Cells[0][2] = "Marti";
StringGrid1->Cells[0][3] = "Miercuri";
StringGrid1->Cells[0][4] = "Joi";
StringGrid1->Cells[0][5] = "Vineri";
StringGrid1->Cells[0][6] = "Sambata";


for (i = 1; i < StringGrid1->RowCount; i++)
for ( j = 1; j < StringGrid1->ColCount; j++) {
nr++;
StringGrid1->Cells[j][i]=nr;
fis >> s;
}

StringGrid1->Cells[j][i] = s;

StringGrid1->Col = 1;
StringGrid1->Row = 1;
ComboBox1->ItemIndex = 0;
ListBox1->ItemIndex = 0;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
	   StringGrid1->Col = ComboBox1->ItemIndex + 1;
	   Edit1->Text = StringGrid1->Cells[StringGrid1->Col][StringGrid1->Row];
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ListBox1Click(TObject *Sender)
{
	StringGrid1->Row = ListBox1->ItemIndex + 1;
	Edit1->Text = StringGrid1->Cells[StringGrid1->Col][StringGrid1->Row];
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        StringGrid1->Cells[StringGrid1->Col][StringGrid1->Row] = Edit1->Text;
}
//---------------------------------------------------------------------------
