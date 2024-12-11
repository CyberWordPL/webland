#include <uicore_main_window.hh>

#include <GLFW/glfw3.h>

using uicore::MainWindow;

bool MainWindow::CreateWindow() {
    window = glfwCreateWindow(640, 480, title.c_str(), NULL, NULL);
    if(!window) {
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(window);
    glClearColor(1, 1, 1, 1);

    return true;
}

void MainWindow::ParseEventLoop() {
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);

        glfwPollEvents();
    }
}