#pragma once
#include "Entity.h"
#include <iostream>
#include <vector>
#include "Component.h"
class AISystem
{
public:
	

	void addEntity(Entity* e) { entities.push_back(e); }
	void update()
	{
	
		for (int i = 0; i < entities.size(); i++)
		{
			switch (entities[i]->getTYpe())
			{
				case Entity::EntityType::PLAYER :
				{
					   HealthComponent* hc = static_cast<HealthComponent*>(entities[i]->getComponent(Component::ComponentType::HEALTH));
					   PositionComponent* pc = static_cast<PositionComponent*>(entities[i]->getComponent(Component::ComponentType::POSITION));
					   std::cout << "Updating player AI" <<  "health : " << hc->getHealth() <<  " Position.x : " << pc->getXPos()  <<" Position.y : " << pc->getYPos() <<std::endl;
					   break;
				}
				case Entity::EntityType::ALIEN :
				{
					HealthComponent* hc = static_cast<HealthComponent*>(entities[i]->getComponent(Component::ComponentType::HEALTH));
					PositionComponent* pc = static_cast<PositionComponent*>(entities[i]->getComponent(Component::ComponentType::POSITION));
					std::cout << "Updating Alien AI" << "health : " << hc->getHealth() << " Position.x : " << pc->getXPos() << " Position.y : " << pc->getYPos() << std::endl;
						break;
				}
				case Entity::EntityType::CAT:
				{
					HealthComponent* hc = static_cast<HealthComponent*>(entities[i]->getComponent(Component::ComponentType::HEALTH));
					PositionComponent* pc = static_cast<PositionComponent*>(entities[i]->getComponent(Component::ComponentType::POSITION));
					std::cout << "Updating Cat AI" << "health : " << hc->getHealth() << " Position.x : " << pc->getXPos() << " Position.y : " << pc->getYPos() << std::endl;
						break;
				}
				case Entity::EntityType::DOG:
				{
					HealthComponent* hc = static_cast<HealthComponent*>(entities[i]->getComponent(Component::ComponentType::HEALTH));
					PositionComponent* pc = static_cast<PositionComponent*>(entities[i]->getComponent(Component::ComponentType::POSITION));
					std::cout << "Updating Dog AI" << "health : " << hc->getHealth() << " Position.x : " << pc->getXPos() << " Position.y : " << pc->getYPos() << std::endl;
					break;
				}
			}	
	}
}
private :
	std::vector<Entity*> entities;
};