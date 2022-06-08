#include "Application.hpp"
#include "frame/Main.hpp"

namespace gui
{

bool Application::OnInit()
{
  frame::Main *frame = new frame::Main("Fakturant", wxPoint(50, 50), wxSize(1200, 960));
  frame->Show(true);
  return true;
}

} // namespace gui
