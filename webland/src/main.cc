#include <shared_logger.hh>

#include <uicore_init.hh>
#include <uicore_main_window.hh>

using webland_shared::LogLevel, webland_shared::LogMessage;

/*
 * Main function of Webland, Initializes everything and loads config
 * */
int main() {
    LogMessage(LogLevel::Note, "Webland Starts");

    std::string tabName = "Webland Alpha";

    uicore::InitUICore();
    uicore::MainWindow window(tabName);
    window.CreateWindow();
    window.ParseEventLoop();
}