#pragma once
#include "Component.h"

class PositionComponent : public Component
{
public:
	PositionComponent() : Component(ComponentType::POSITION) , m_xPos(10),m_yPos(10) {}
	int getXPos() { return m_xPos; }
	int getYPos() { return m_yPos; }
	void setXPos(int _xPos) { this->m_xPos = _xPos;}
	void setYPos(int _yPos) { this->m_yPos = m_yPos; }
private:
	int m_xPos;
	int m_yPos;

};