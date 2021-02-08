#ifndef __APP_MAIN_HPP__
#define __APP_MAIN_HPP__

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
# include <wx/wx.h>
#endif

namespace App
{

class Main
  : public wxApp
{
public:
  virtual bool OnInit() wxOVERRIDE;
};

} // namespace App

wxDECLARE_APP(App::Main);

#endif // __APP_MAIN_HPP__