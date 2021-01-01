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