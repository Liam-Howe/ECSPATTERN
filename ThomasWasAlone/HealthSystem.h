#pragma once

#include <iostream>
class HealthSystem
{
public : 
	void addEntity(Entity* e) { entities.push_back(e);}
		void update()
		{

			for (int i = 0; i < entities.size(); i++)
			{
				switch (entities[i]->getTYpe())
				{
				case Entity::EntityType::PLAYER:
				{
					HealthComponent* hc = static_cast<HealthComponent*>(entities[i]->getComponent(Component::ComponentType::HEALTH));
					std::cout << "Updating player AI" << hc->getHealth() << std::endl;
					break;
				}
				case Entity::EntityType::ALIEN:
				{
					HealthComponent* hc = static_cast<HealthComponent*>(entities[i]->getComponent(Component::ComponentType::HEALTH));
					std::cout << "Updating Alien AI" << hc->getHealth() << std::endl;
					break;
				}
				case Entity::EntityType::CAT:
				{
					HealthComponent* hc = static_cast<HealthComponent*>(entities[i]->getComponent(Component::ComponentType::HEALTH));
					std::cout << "Updating Cat AI" << hc->getHealth() << std::endl;
					break;
				}
				case Entity::EntityType::DOG:
				{
					HealthComponent* hc = static_cast<HealthComponent*>(entities[i]->getComponent(Component::ComponentType::HEALTH));
					std::cout << "Updating Dog AI" << hc->getHealth() << std::endl;
					break;
				}
				}
			}
		}

private:
	std::vector<Entity*> entities;
};