#include "Main.hpp"

namespace gui::frame
{

Main::Main(const wxString& title, const wxPoint& pos, const wxSize& size)
: wxFrame(nullptr, wxID_ANY, title, pos, size)
{
  CreateStatusBar();
  SetStatusText("Witaj w programie Fakturant!");
}

void Main::OnExit(wxCommandEvent&)
{
  Close(true);
}

} // namespace gui::frame
