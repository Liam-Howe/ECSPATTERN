#pragma once

#include <iostream>
class HealthSystem
{

	std::vector<Entity> entities;


public : 
	void addEntity(Entity e) {}
	void update()
	{

		std::cout << "HealthSystem update" << std::endl;
	}


};