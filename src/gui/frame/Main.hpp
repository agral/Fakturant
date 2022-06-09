#pragma once

#include <wx/wx.h>

namespace gui::frame
{

class Main : public wxFrame
{
 public:
  Main(const wxString& title, const wxPoint& pos, const wxSize& size);

 private:
  void OnExit(wxCommandEvent&);
};

} // namespace gui::frame
