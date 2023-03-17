//---------------------------------------------------------------------------

#ifndef UnitMainH
#define UnitMainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <ToolWin.hpp>
#include <Menus.hpp>
#include <ImgList.hpp>
#include <Buttons.hpp>
#include <Grids.hpp>
#include <ValEdit.hpp>
#include <System.ImageList.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
        TToolBar *ToolBar1;
        TStatusBar *StatusBar1;
        TMainMenu *MainMenu1;
        TMenuItem *File1;
        TMenuItem *Help1;
        TMenuItem *Optiuni1;
        TMenuItem *Nou1;
        TMenuItem *Parasire1;
        TMenuItem *Setari1;
        TImageList *ImageList1;
        TMenuItem *Autor1;
        TMenuItem *Aplicatie1;
        TToolButton *ToolButton1;
        TToolButton *ToolButton2;
        TToolButton *ToolButton3;
        TToolButton *ToolButton4;
        TToolButton *ToolButton5;
        TToolButton *ToolButton6;
        TToolButton *ToolButton7;
        TTimer *Timer1;
        TImageList *ImageList2;
        TControlBar *ControlBar1;
        TRichEdit *RichEdit1;
        TSplitter *Splitter1;
        TSpeedButton *SpeedButton1;
        TLabel *Label1;
        TComboBox *ComboBox1;
        TListBox *ListBox1;
        TMenuItem *Calculator1;
        TToolButton *ToolButton8;
        void __fastcall Parasire1Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Nou1Click(TObject *Sender);
        void __fastcall Setari1Click(TObject *Sender);
        void __fastcall Autor1Click(TObject *Sender);
        void __fastcall Aplicatie1Click(TObject *Sender);
        void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall ToolButton3Click(TObject *Sender);
	void __fastcall ToolButton8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFormMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
