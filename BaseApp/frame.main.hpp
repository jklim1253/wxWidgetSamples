#ifndef __FRAME_MAIN_HPP__
#define __FRAME_MAIN_HPP__

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
# include <wx/wx.h>
#endif

namespace Frame
{

class Main
  : public wxFrame
{
public:
  Main(wxString const&, wxSize const&);
};

} // namespace Frame

#endif // __FRAME_MAIN_HPP__