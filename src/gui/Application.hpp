#pragma once

#include <wx/wx.h>

namespace gui
{

class Application: public wxApp
{
 public:
  virtual bool OnInit();
};

} // namespace gui
