#pragma once
#include "Component.h"

class  ControlComponenet : public Component
{
public:
	ControlComponenet() : Component(ComponentType::CONTROL), pressedButton(false) {};
	~ControlComponenet() {};
	void setButton(bool value) { pressedButton = value; }
	bool getButton() { return pressedButton; }
private:
	bool pressedButton;

};

