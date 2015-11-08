#include "Submarine.h"

Submarine::Submarine(std::string n, int h)
{
	name = n;
	health = h;
}

Ship* Submarine::clone() {
	return new Submarine(name, health);
}
