#pragma once

//indices (locations) of Queue Families (if they exist at all)

struct QueueFamilyIndices
{
	int graphicsFamily = -1;

	bool isValid()
	{
		return graphicsFamily >= 0;
	}

};