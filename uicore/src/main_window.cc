#include <gtk/gtk.h>

#include <uicore_main_window.hh>

using uicore::MainWindow;

MainWindow::MainWindow(GtkApplication *app) {
    gtk_application = app;
}

void MainWindow::RunWindow() {
    window = gtk_application_window_new(gtk_application);

    GtkWidget *button = gtk_button_new_with_label("Hello, World!");

    g_signal_connect_swapped(button, "clicked", G_CALLBACK(gtk_window_close), window);
    gtk_window_set_child(GTK_WINDOW(window), button);

    gtk_window_present(GTK_WINDOW(window));
}