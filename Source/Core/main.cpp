#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

#include "../Graphics/renderer.h"

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

const char* vertexShaderSource = "Shader/basic/vertex_shader.glsl";
const char* fragmentShaderSource = "Shader/basic/fragment_shader.glsl";




int main() {
	// Initialize GLFW
	if (!glfwInit()) {
		std::cout << "Failed to initialize GLFW" << std::endl;
		return -1;
	}

	//std::ifstream file(vertexShaderSource);
	//if (!file.is_open()) {
	//	std::cout << "FAILED TO OPEN: " << vertexShaderSource << std::endl;
	//}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Create Window
	GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Magnetic Field Point Cloud", NULL, NULL);
	if (window == NULL) {
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);
	
	// Check GLAD
	if (!gladLoadGL()) {
		std::cout << "Failed to initialize GLAD" << std::endl;
		return -1;
	}

	glViewport(0, 0, SCR_WIDTH, SCR_HEIGHT);

	// Create Renderer
	Renderer renderer(vertexShaderSource, fragmentShaderSource);

	// Main Loop
	while (!glfwWindowShouldClose(window)) {
		// Input
		glfwPollEvents();
		
		// Render
		renderer.Render();

		// Swap Buffers and Poll IO Events
		glfwSwapBuffers(window);
	}

	renderer.~Renderer();

}