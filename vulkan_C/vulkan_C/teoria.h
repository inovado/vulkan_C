/*

----------------------------------210. [CODE] Graphics Pipeline Part 1 Shader Modules--------------


----------------------------------209. [THEORY] Graphics Pipeline--------------

-vertex index buffer	-Defindes layout format of vertex input data
-input assembler		-Defines how to assemble vertices to primitives(e.g. Triangles or lines)
 -vertex shader			-
-tessellation
-geometry shader
-rasterization			-how to handle computation of fragments from primitives.
-fragment shader
-color blending
-framebuffer

RENDER PASS for an attachment
	-Initial Layout
	-Subpass 1 layout
	-subpass 2 layout
	-final layout



*/

/*
----------------------------------206-6. [THEORY] Surfaces, Image Views, and the Swapchain--------------
-Surfaces
-Swapchains
	-Surface capabilities: What the surface is capable of handling (e.g. image size)
	-Surface format: The format of the surface the Swapchain will present (e.g.RGB)
	-Presentation Mode: The order and timing of images being presented to the surface
		VK_PRESENT_MODE_MAILBOX_KHR = evitar "tearing" o sopreposicion de imagenes
-ImageViews


- Buffers
- Swapchain
- GLFW - Interfaz entre la ventana creada y GLFW y VULKAN
- Presentation Queue
- Monitors work
	- Monitors draw starting at the top-left pixel, and then drawing to the screen row by row.
	-

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