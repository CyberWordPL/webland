#include <uicore_init.hh>

#include <shared_logger.hh>

#include <GLFW/glfw3.h>

using webland_shared::LogLevel, webland_shared::LogMessage;

bool uicore::InitUICore() {
    LogMessage(LogLevel::Info, "UICore Initialization Started");

    if(!glfwInit()) {
        LogMessage(LogLevel::Error, "GLFW Initialization Fails");
        return false;
    }

    LogMessage(LogLevel::Info, "UICore Initialization Done");

    return true;
}