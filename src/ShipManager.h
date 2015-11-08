#ifndef SHIPMANAGER_H_
#define SHIPMANAGER_H_

#include "Ship.h"
#include "Submarine.h"
#include "Patrol.h"

/**
 * A static class that creates Ship objects on demand
 */
class ShipManager
{
private:
	static Ship* patrolPrototype;
	static Ship* submarinePrototype;

public:
	/**
	 * Clone and return a pointer to a copy of its Patrol object prototype
	 */
	static Ship* getPatrol();
	/**
	 * Clone and return a pointer to a copy of its Submarine object prototype
	 */
	static Ship* getSubmarine();
};

#endif /* SHIPMANAGER_H_ */
