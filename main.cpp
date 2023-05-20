#include "main.h"
#include "wx/wx.h"
#include "MainWindow.h"

bool hospitalApp::OnInit() {
	MainWindow *main = new MainWindow();
	main->Show(true);
	return true;
}

wxIMPLEMENT_APP(hospitalApp);

