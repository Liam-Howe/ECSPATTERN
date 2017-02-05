#pragma once

#include "Entity.h"
#include <vector>
#include <iostream>
class ControlSystem
{
public:
	void addEntity(Entity* e) { entities.push_back(e); }
	void update()
	{

		for (int i = 0; i < entities.size(); i++)
		{
			switch (entities[i]->getTYpe())
			{
			case Entity::EntityType::PLAYER:
			{
				ControlComponenet* hc = static_cast<ControlComponenet*>(entities[i]->getComponent(Component::ComponentType::CONTROL));
				std::cout << "Updating player Controls";
				if (hc->getButton()) { std::cout << "user pressed : a" << std::endl; }
				else
				{ std::cout << " user pressed : b" << std::endl; }
				break;
			}
			case Entity::EntityType::ALIEN:
			{
				ControlComponenet* hc = static_cast<ControlComponenet*>(entities[i]->getComponent(Component::ComponentType::CONTROL));
				std::cout << "Updating AI Controls";
				if (hc->getButton()) { std::cout << "user pressed : a" << std::endl; }
				else
				{
					std::cout << " user pressed : b" << std::endl;
				}
				break;
			}
			case Entity::EntityType::CAT:
			{
				ControlComponenet* hc = static_cast<ControlComponenet*>(entities[i]->getComponent(Component::ComponentType::CONTROL));
				std::cout << "Updating Cat Controls";
				if (hc->getButton()) { std::cout << "user pressed : a" << std::endl; }
				else
				{
					std::cout << " user pressed : b" << std::endl;
				}
				break;
			}
			case Entity::EntityType::DOG:
			{
				ControlComponenet* hc = static_cast<ControlComponenet*>(entities[i]->getComponent(Component::ComponentType::CONTROL));
				std::cout << "Updating Dog Controls";
				if (hc->getButton()) { std::cout << "user pressed : a" << std::endl; }
				else
				{
					std::cout << " user pressed : b" << std::endl;
				}
				break;
			}
			}
		}
	}

private:
	std::vector<Entity*> entities;
};