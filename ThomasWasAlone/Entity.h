#pragma once
#include "Component.h"

class Entity
{
	int id;
public : 

	enum  class EntityType
	{
		PLAYER,
		ALIEN,
		CAT,
		DOG

	};

	Entity(EntityType _type) { type = _type; }
	~Entity() {};
	void addComponent(Component* c) { components.push_back(c); }
	void removeComponent(Component c) {}
	std::vector<Component*> getComponents() { return components;};
	Component* getComponent(Component::ComponentType type)
	{
		for (int  i = 0; i < components.size(); i++)
		{
			if (components.at(i)->getType() == type)
			{
				return components.at(i);
			}
		}
	}
	EntityType getTYpe() { return type; }
private:
	std::vector <Component*> components;
	EntityType type;




};