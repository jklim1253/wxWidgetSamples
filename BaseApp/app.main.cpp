#include "app.main.hpp"
#include "frame.main.hpp"

wxIMPLEMENT_APP(App::Main);

namespace App
{

bool Main::OnInit()
{
  wxFrame* f = new Frame::Main(
    wxT("base"),
    wxSize(400, 300)
  );
  f->Show();
  return true;
}

} // namespace App
