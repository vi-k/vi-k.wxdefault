#include "stdafx.h"

#include "handle_exception.h"

using namespace std;

#include <boost/config/warning_disable.hpp> /* против unsafe */

#include <wx/msgdlg.h>

void handle_exception(
	std::exception *e,
	const std::wstring &add_to_log,
	const std::wstring &window_title)
{
    wstringstream log_title;
    wstringstream error;

    if (!e)
    {
    	log_title << L"unknown exception";
    	error << L"Неизвестное исключение";
    }
    else
    {
   		log_title << L"std::exception";
		error << e->what();
	}

	if (!add_to_log.empty())
		log_title << L' ' << add_to_log;

	error << L"\n\n(" << log_title.str() << L')';

	/*TODO: Запись ошибки в лог */

	wxMessageBox(error.str(), window_title, wxOK | wxICON_ERROR);
}
