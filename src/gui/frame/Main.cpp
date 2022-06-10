#include "Main.hpp"

namespace gui::frame
{

Main::Main(const wxString& title, const wxPoint& pos, const wxSize& size)
: wxFrame(nullptr, wxID_ANY, title, pos, size)
{
  CreateMenuBar();
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

void Main::CreateMenuBar()
{
  m_topMenuBar = new wxMenuBar{};
  m_menuSectionFile = new wxMenu{};
  m_menuSectionFile->Append(wxID_EXIT, wxT("Wyjście"));
  Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(Main::OnExit));
  m_topMenuBar->Append(m_menuSectionFile, wxT("Plik"));

  SetMenuBar(m_topMenuBar);
}

} // namespace gui::frame
