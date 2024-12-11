#ifndef WEBLAND_APPLICATION_HH
#define WEBLAND_APPLICATION_HH

#include <gtk/gtk.h>

#define WEBLAND_GTK_APP_NAME "me.cyberword.webland"

namespace webland {
    class WeblandApplication {
    private:
        GtkApplication *gtk_app;
    public:
        WeblandApplication();
        void Run(int argc, char **argv);
    };
}

#endif