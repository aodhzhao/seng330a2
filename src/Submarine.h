#ifndef SUBMARINE_H_
#define SUBMARINE_H_

#include "Ship.h"

/**
 * A derived class of Ship representing a Submarine
 */
class Submarine: public Ship
{
public:
	/**
	 * Constructs a Submarine with the specified name and health.
	 */
	Submarine(std::string n, int h);

	Ship* clone(); //!< Create and return a pointer to a copy of this object
};

#endif /* SUBMARINE_H_ */
