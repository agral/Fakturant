#include "Main.hpp"

namespace gui::frame
{

Main::Main(const wxString& title, const wxPoint& pos, const wxSize& size)
: wxFrame(nullptr, wxID_ANY, title, pos, size)
{
  CreateStatusBar();
  SetStatusText("Witaj w programie Fakturant!");

  m_pnlMain = new wxPanel(this, wxID_ANY);
  m_btnQuit = new wxButton(m_pnlMain, wxID_EXIT, wxT("Wyjście"), wxPoint(20, 20));
  Connect(wxID_EXIT, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Main::OnExit));
}

void Main::OnExit(wxCommandEvent&)
{
  Close(true);
}

} // namespace gui::frame
