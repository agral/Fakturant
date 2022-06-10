#pragma once

#include <wx/wx.h>
#include <wx/menu.h>

namespace gui::frame
{

class Main : public wxFrame
{
 public:
  Main(const wxString& title, const wxPoint& pos, const wxSize& size);

 private:
  void OnExit(wxCommandEvent&);

  void CreateMenuBar();

  wxPanel *m_pnlMain;
  wxButton *m_btnQuit;
  wxMenuBar *m_topMenuBar;
  wxMenu *m_menuSectionFile;
};

} // namespace gui::frame
