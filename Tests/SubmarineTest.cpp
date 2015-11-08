#include "gtest/gtest.h"
#include <string>
#include "Ship.h"
#include "Submarine.h"

TEST (Submarine, Constructor) {
	std::string name = "Name of Submarine";
	int health = 5;

	Submarine* p = new Submarine(name, health);
	ASSERT_EQ(p->getName(), name);
	ASSERT_EQ(p->getHealth(), health);
}

TEST (Submarine, Clone) {
	std::string name = "Name of Submarine";
	int health = 5;

	Ship* p1 = new Submarine(name, health);
	Ship* p2 = p1->clone();

	ASSERT_NE(&p1, &p2);
}
