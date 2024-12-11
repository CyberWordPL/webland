#include <shared_logger.hh>

#include <webland_application.hh>

#include <uicore_main_window.hh>

#include <gtk/gtk.h>

using webland::WeblandApplication;
using webland_shared::LogLevel, webland_shared::LogMessage;

static void OnActivate(GtkApplication *app) {
    uicore::MainWindow main_window(app);
    main_window.RunWindow();
}

WeblandApplication::WeblandApplication() {
    gtk_app = gtk_application_new(WEBLAND_GTK_APP_NAME, G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(gtk_app, "activate", G_CALLBACK(OnActivate), NULL);
}

void WeblandApplication::Run(int argc, char **argv) {
    LogMessage(LogLevel::Info, "GTK WebLand application starts");

    g_application_run(G_APPLICATION(gtk_app), argc, argv);
}
