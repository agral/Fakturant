#include <iostream>

#include <wx/wx.h>

#include "gui/frame/Main.hpp"

class GuiFakturantApp: public wxApp
{
 public:
  virtual bool OnInit();
};

bool GuiFakturantApp::OnInit()
{
  gui::frame::Main* frame = new gui::frame::Main("Fakturant", wxPoint(50, 50), wxSize(1200, 960));
  frame->Show(true);
  return true;
}

// a macro that provides a main() method:
wxIMPLEMENT_APP(GuiFakturantApp);
