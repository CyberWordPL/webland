#include <shared_logger.hh>

#include <webland_application.hh>

using webland::WeblandApplication;
using webland_shared::LogLevel, webland_shared::LogMessage;

/*
 * Main function of Webland, Initializes everything and loads config
 * */
int main(int argc, char **argv) {
    LogMessage(LogLevel::Info, "Webland Starts");

    WeblandApplication app;
    app.Run(argc, argv);
}