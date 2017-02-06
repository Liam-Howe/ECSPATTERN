#pragma once
#include "Entity.h"
#include <iostream>
#include <vector>
class RenderSystem
{
public:
	void addEntity(Entity* e) { entities.push_back(e);}
	void update()
	{
		std::cout << "Updating  Render System :" << std::endl;
			for (int i = 0; i < entities.size(); i++)
			{
				switch (entities[i]->getTYpe())
				{
				case Entity::EntityType::PLAYER:
				{
					PositionComponent* pc = static_cast<PositionComponent*>(entities[i]->getComponent(Component::ComponentType::POSITION));
					std::cout << "Updating player Render" << " Position.x : " << pc->getXPos() << " Position.y : " << pc->getYPos() << std::endl;
					break;
				}
				case Entity::EntityType::ALIEN:
				{
					PositionComponent* pc = static_cast<PositionComponent*>(entities[i]->getComponent(Component::ComponentType::POSITION));
					std::cout << "Updating Alien Render" << " Position.x : " << pc->getXPos() << " Position.y : " << pc->getYPos() << std::endl;
					break;
				}
				case Entity::EntityType::CAT:
				{
					PositionComponent* pc = static_cast<PositionComponent*>(entities[i]->getComponent(Component::ComponentType::POSITION));
					std::cout << "Updating Cat Render" << " Position.x : " << pc->getXPos() << " Position.y : " << pc->getYPos() << std::endl;
					break;
				}
				case Entity::EntityType::DOG:
				{
					PositionComponent* pc = static_cast<PositionComponent*>(entities[i]->getComponent(Component::ComponentType::POSITION));
					std::cout << "Updating Dog Render" << " Position.x : " << pc->getXPos() << " Position.y : " << pc->getYPos() << std::endl;
					break;
				}
			}
		}
	}

private :
	std::vector<Entity*> entities;
};