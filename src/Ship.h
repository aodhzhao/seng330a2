#ifndef SENG330A2_H_
#define SENG330A2_H_

#include <string>

class Ship
{
protected:
	int health; //!< The health of the ship.
	std::string name; //!< The name of the ship.
public:
	virtual Ship* clone() = 0; //!< Create and return a pointer to a copy of this object
	std::string getName(); //!< Returns the name of the ship
	int getHealth();//!< Returns the health of the ship
};

#endif
