#ifndef WEBLAND_UICORE_MAIN_WINDOW_HH
#define WEBLAND_UICORE_MAIN_WINDOW_HH

#include <vector>

#include <gtk/gtk.h>

namespace uicore {
    class MainWindow {
    private:
        GtkApplication *gtk_application;
        GtkWidget *window;
        std::vector<GtkWidget> elements;
    public:
        MainWindow(GtkApplication *app);
        void RunWindow();
    };
}

#endif