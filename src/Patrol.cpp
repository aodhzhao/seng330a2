#include "Patrol.h"

Patrol::Patrol(std::string n, int h)
{
	name = n;
	health = h;
}

Ship* Patrol::clone() {
	return new Patrol(name, health);
}
