#include "libs/includes/glew/glew.h"
#include "libs/includes/glfw/glfw3.h"

#include <iostream>
using std::cout;
using std::endl;

int main() {
    if (!glfwInit()) {
        cout << "[ERROR]: GLFW INIT" << endl;
        return -1;
    }

    glfwSetErrorCallback( [](int errCode, const char* desc) { cout << "[ERROR " << errCode << "]: " << desc << endl; } );

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_DOUBLEBUFFER, GLFW_TRUE);

    int width = 800;
    int height = 600;

    GLFWwindow* handle = glfwCreateWindow(width, height, "BASE", nullptr, nullptr);
    glfwMakeContextCurrent(handle);

    if (glewInit()) {
        cout << "[ERROR]: GLEW INIT" << endl;

        glfwTerminate();
        return -1;
    }

    glViewport(0, 0, width, height);

    // render loop
    while (!glfwWindowShouldClose(handle)) {
        glfwPollEvents();

        glClear(GL_COLOR_BUFFER_BIT);
        // draw here

        glfwSwapBuffers(handle);
    }

    glfwTerminate();
    return 0;
}