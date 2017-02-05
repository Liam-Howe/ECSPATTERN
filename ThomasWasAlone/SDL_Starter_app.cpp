//  Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <vector>
#include "Entity.h"
#include "HealthComponent.h"
#include "HealthSystem.h"
#include "PositionComponent.h"
#include "ControlComponent.h"
#include "AISystem.h"
#include "RenderSystem.h"
#include "ControlSystem.h"
#include <thread>
#include <chrono>
using namespace std;



/**Create and initialises an instance of game, and clean up when the game is closed*/

int main()
{

	std::vector<Entity*> entities;
 
	Entity* player = new Entity(Entity::EntityType::PLAYER);
	player->addComponent(new PositionComponent());
	player->addComponent(new HealthComponent());
	player->addComponent(new ControlComponenet());
	entities.push_back(player);
	
	Entity* ALien = new Entity(Entity::EntityType::ALIEN);
	ALien->addComponent(new HealthComponent());
	ALien->addComponent(new PositionComponent());
	entities.push_back(ALien);

	Entity* cat = new Entity(Entity::EntityType::CAT);
	cat->addComponent(new PositionComponent());
	cat->addComponent(new HealthComponent());
	entities.push_back(cat);
	
	Entity* dog =new  Entity(Entity::EntityType::DOG);
	dog->addComponent(new PositionComponent());
	dog->addComponent(new HealthComponent());

	entities.push_back(dog);

	AISystem ai = AISystem();
	ai.addEntity(player);
	ai.addEntity(ALien);
	ai.addEntity(cat);
	ai.addEntity(dog);
	
	RenderSystem render =  RenderSystem();
	render.addEntity(player);
	render.addEntity(ALien);
	render.addEntity(cat);
	render.addEntity(dog);

	ControlSystem control = ControlSystem();
	control.addEntity(player);





	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		control.update();
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		ai.update();
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		render.update();
	}

	system("pause");
    return 0;
}

