#include "gtest/gtest.h"
#include <string>
#include "Ship.h"
#include "Patrol.h"

TEST (Patrol, Constructor) {
	std::string name = "Name of Patrol";
	int health = 5;

	Patrol* p = new Patrol(name, health);
	ASSERT_EQ(p->getName(), name);
	ASSERT_EQ(p->getHealth(), health);
}

TEST (Patrol, Clone) {
	std::string name = "Name of Patrol";
	int health = 5;

	Ship* p1 = new Patrol(name, health);
	Ship* p2 = p1->clone();

	ASSERT_NE(&p1, &p2);
}
