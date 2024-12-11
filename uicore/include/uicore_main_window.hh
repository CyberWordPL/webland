#ifndef WEBLAND_UICORE_MAIN_WINDOW_HH
#define WEBLAND_UICORE_MAIN_WINDOW_HH

#include <string>

#include <GLFW/glfw3.h>

namespace uicore {
    class MainWindow {
    private:
        std::string title;
        GLFWwindow *window;
    public:
        MainWindow(std::string title_name) {
            title = title_name;
        }
        bool CreateWindow();
        void ParseEventLoop();
    };
}

#endif