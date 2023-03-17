//---------------------------------------------------------------------------

#ifndef UnitAutorH
#define UnitAutorH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <jpeg.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TFormAutor : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TRichEdit *RichEdit1;
        TBitBtn *BitBtn1;
private:	// User declarations
public:		// User declarations
        __fastcall TFormAutor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormAutor *FormAutor;
//---------------------------------------------------------------------------
#endif
