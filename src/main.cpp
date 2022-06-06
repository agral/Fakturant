#include <iostream>

#include <wx/wx.h>

#include "Util.hpp"

class GuiFakturantApp: public wxApp
{
 public:
  virtual bool OnInit();
};

class GuiFrameMain: public wxFrame
{
 public:
  GuiFrameMain(const wxString& title, const wxPoint& pos, const wxSize& size);

 private:
  void OnExit(wxCommandEvent& event);
};

bool GuiFakturantApp::OnInit()
{
  GuiFrameMain* frame = new GuiFrameMain("Fakturant", wxPoint(50, 50), wxSize(1200, 960));
  frame->Show(true);
  return true;
}

GuiFrameMain::GuiFrameMain(const wxString& title, const wxPoint& pos, const wxSize& size)
: wxFrame(nullptr, wxID_ANY, title, pos, size)
{
  CreateStatusBar();
  SetStatusText("Witaj w programie Fakturant");
}

void GuiFrameMain::OnExit(wxCommandEvent& event)
{
  Close(true);
}

// a macro that provides a main() method:
wxIMPLEMENT_APP(GuiFakturantApp);
