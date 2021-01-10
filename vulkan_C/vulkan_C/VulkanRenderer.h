#pragma once
#define GLFW_INCLUDE_VULKAN
#include <glfw3.h>

#include <stdexcept> // validacion de instrucciones en vulkan
#include <vector>

#include "Utilities.h"


class VulkanRenderer
{
public:
	int init(GLFWwindow* newWindow);
	void cleanup();



private:



	GLFWwindow* window;

	// Vulkan components
	VkInstance instance;

	// Dispositivo fisico
	struct {
		VkPhysicalDevice physicalDevice;
		VkDevice logicalDevice;
	}mainDevice;
	VkQueue graphicsQueue;


	// Vulkan Functions
	// - Create Functions
	void createInstance();

	void createLogicalDevice();

	// - Get Functions
	void getPhysicalDevice();

	// - Support Functions
	// -- Checker Functions
	bool checkInstanceExtensionSupport(std::vector<const char*>* checkExtensions);
	bool checkDeviceSuitable(VkPhysicalDevice device);

	// -- Getter functions
	QueueFamilyIndices getQueueFamilies(VkPhysicalDevice device);



};



