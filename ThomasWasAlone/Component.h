#pragma once


class Component
{
public:

	enum class ComponentType {
		HEALTH,
		POSITION,
		CONTROL
	};


	Component(ComponentType type): m_type(type) {};
	ComponentType getType() { return m_type; }

private:
	ComponentType m_type;
};