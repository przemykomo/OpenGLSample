#include <GLFW/glfw3.h>
#include <iostream>

int main() {
    if(!glfwInit()) {
        std::cout << "Can't initialize GLFW!\n";
        return -1;
    }

    GLFWwindow* window{ glfwCreateWindow(640, 480, "Opengl sample", NULL, NULL) };
    if(!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
