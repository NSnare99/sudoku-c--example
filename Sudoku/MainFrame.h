#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#endif // MAIN_H_INCLUDED
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
    MainFrame(const wxString& title);


private:
    void OnButtonClicked(wxCommandEvent& evt);

};
