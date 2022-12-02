#pragma once

#include <wx/wx.h>

class MainFrame: public wxFrame
{
public:
    MainFrame(const wxString& title,
                    const wxPoint& pos, const wxSize& size);

private:
    void OnHello(wxCommandEvent& event);
    void OnBonjour(wxCommandEvent& event);
    void OnGutenTag(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

    wxDECLARE_EVENT_TABLE();
};

enum
{
    ID_Hello    = 1,
    ID_Bonjour  = 2,
    ID_GutenTag = 3
};