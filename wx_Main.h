/***************************************************************
 * Name:      wx_Main.h
 * Purpose:   Defines Application Frame
 * Author:    vi.k (vi.k@mail.ru)
 * Created:   2010-03-30
 * Copyright: vi.k ()
 * License:
 **************************************************************/

#ifndef WX_MAIN_H
#define WX_MAIN_H

#include "wx\msw\winundef.h"

//(*Headers(wx_MainFrame)
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class wx_MainFrame: public wxFrame
{
	public:
		wx_MainFrame(wxWindow* parent, wxWindowID id = -1);
		virtual ~wx_MainFrame();

	private:

		//(*Handlers(wx_MainFrame)
		void OnQuit(wxCommandEvent& event);
		void OnAbout(wxCommandEvent& event);
		//*)

		//(*Identifiers(wx_MainFrame)
		static const long ID_MENU_QUIT;
		static const long ID_MENU_ABOUT;
		static const long ID_PANEL1;
		static const long ID_PANEL2;
		static const long ID_STATUSBAR1;
		//*)

		//(*Declarations(wx_MainFrame)
		wxFlexGridSizer* FlexGridSizer1;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxStatusBar* StatusBar1;
		//*)

		DECLARE_EVENT_TABLE()
};

#endif // WX_MAIN_H
