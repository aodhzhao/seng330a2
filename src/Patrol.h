/*
 * Patrol.h
 *
 *  Created on: Nov 8, 2015
 *      Author: aodhzhao
 */

#ifndef PATROL_H_
#define PATROL_H_
#include "Ship.h"

/**
 * A derived class of Ship representing a Patrol
 */
class Patrol: public Ship
{
public:
	/**
	 * Constructs a Patrol with the specified name and health.
	 */
	Patrol(std::string n, int h);

	Ship* clone(); //!< Create and return a pointer to a copy of this object
};
#endif /* PATROL_H_ */
