// -------------------------------4.[CODE] Window, Instances, and Devices-----------------------------------------
#define GLFW_INCLUDE_VULKAN
#include <glfw3.h>
#include <stdexcept> // validacion de instrucciones en vulkan
#include <vector>

#include <iostream>
#include "VulkanRenderer.h"

GLFWwindow* window;
VulkanRenderer vulkanRenderar;

void initWindow(std::string wName = "test window", const int width = 800, const int height = 600)
{
	// Initialise GLFW
	glfwInit();

	// set GLFW to NOT work with OpenGL
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(width, height, wName.c_str(), nullptr, nullptr);
}


int main()
{
	//create Window
	initWindow("Test Window", 800, 600);

	// Create Vulkan Renderer instance
	if (vulkanRenderar.init(window) == EXIT_FAILURE);
	{
		return EXIT_FAILURE;
	}


	// Loop until closed
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	vulkanRenderar.cleanup();

	//Destroy GLFW window and stop GLFW
	glfwDestroyWindow(window);
	glfwTerminate();



	return 0;


}



// -------------------------------3. [THEORY] Instances, Devices, and Validation Layers----------------------------

//#define GLFW_INCLUDE_VULKAN
//#include <glfw3.h>
//#define GLM_FORCE_RADIANS
//#define GLM_FORCE_DEPTH_ZERO_TO_ONE // profundidad de 0 a 1 no de -1 a 1
//#include <glm.hpp>
//#include <mat4x4.hpp>
//
//#include <iostream>
//
//int main()
//{
//	glfwInit();
//
//	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
//	GLFWwindow* window = glfwCreateWindow(800, 600, "Test window", nullptr, nullptr);
//
//	uint32_t extensionCount = 0;
//	vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);
//
//	printf("extension count: %i\n", extensionCount);
//
//	glm::mat4 testMatrix(1.0f);
//	glm::vec4 testVector(1.0f);
//
//	auto testREsult = testMatrix * testVector;
//
//
//	while (!glfwWindowShouldClose(window))
//	{
//		glfwPollEvents();
//	}
//
//	glfwDestroyWindow(window);
//
//	glfwTerminate();
//	
//	return 0;
//}