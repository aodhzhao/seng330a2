#include "ShipManager.h"

Ship* ShipManager::getPatrol() {
	return patrolPrototype->clone();
}
	/**
	 * Clone and return a pointer to a copy of its Submarine object prototype
	 */
Ship* ShipManager::getSubmarine() {
	return submarinePrototype->clone();
}


Ship* ShipManager::patrolPrototype = new Patrol("Patrol Ship", 3);
Ship* ShipManager::submarinePrototype = new Submarine("Submarine Ship", 2);
