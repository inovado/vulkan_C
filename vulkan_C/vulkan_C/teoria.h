/*
----------------------------------206-6. [THEORY] Surfaces, Image Views, and the Swapchain--------------
-Surfaces
-Swapchains
	-Surface capabilities: What the surface is capable of handling (e.g. image size)
	-Surface format: The format of the surface the Swapchain will present (e.g.RGB)
	-Presentation Mode: The order and timing of images being presented to the surface
		VK_PRESENT_MODE_MAILBOX_KHR = evitar "tearing" o sopreposicion de imagenes
-ImageViews



*/


/*
----------------------------------203-INSTANCES, DEVICES AND VALIDATION-------------------------------------------

VULKAN reconoce dos tipos de dispositivos
	- Dispositivo fisico
		- GPU  
			-memoria
			-Queues
				-Queue Familie
					-Graphisc
					-Compute
					-Transfer
	- Dispositivo logico
		- Interfaz con el dispositvo fisico
		- Multiples disposivos logicos que hacen referencia al mismo dispositivo fisico
		- Creation
			-Define queue families and number of queues you wish to assign to the logical device from the physical device.
			-Define all the features you wish to enable (geometry shader, anisotropy, wide lines, etc.)

	-Extensions
		-GLFW is the "Graphics Library Framework"

	-Validation Layers
		-Each Layer can check different functions
		-Must enable a validation layer to check manual
		-VK_LAYER_LUNAG_




 

*/