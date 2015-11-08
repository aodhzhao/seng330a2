#include "gtest/gtest.h"
#include "Ship.h"
#include "ShipManager.h"

TEST (ShipManager, Patrol) {
	Ship* p = ShipManager::getPatrol();
	ASSERT_EQ(p->getHealth(), 3);
	ASSERT_EQ(p->getName(), "Patrol Ship");
}

TEST (ShipManager, Submarine) {
	Ship* s = ShipManager::getSubmarine();
	ASSERT_EQ(s->getHealth(), 2);
	ASSERT_EQ(s->getName(), "Submarine Ship");
}

TEST (ShipManager, DeepCopyPatrol) {
	Ship* p1 = ShipManager::getPatrol();
	Ship* p2 = ShipManager::getPatrol();

	ASSERT_NE(&p1, &p2);
}

TEST (ShipManager, DeepCopySubmarine) {
	Ship* s1 = ShipManager::getSubmarine();
	Ship* s2 = ShipManager::getSubmarine();

	ASSERT_NE(&s1, &s2);
}
