//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Media.hpp>
//---------------------------------------------------------------------------
class TmainDungeonDescent : public TForm
{
__published:	// IDE-managed Components
	TRectangle *title;
	TRectangle *startscreen;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *info;
	TStyleBook *StyleBook1;
	TRectangle *settings;
	TMediaPlayerControl *MediaPlayerControl1;
	TMediaPlayer *MediaPlayer1;
	TRectangle *help;
private:	// User declarations
public:		// User declarations
	__fastcall TmainDungeonDescent(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmainDungeonDescent *mainDungeonDescent;
//---------------------------------------------------------------------------
#endif
