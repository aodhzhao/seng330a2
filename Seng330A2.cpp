#include <iostream>
#include <string>
#include <list>
#include <vector>

/**
 * The base class used to derive Patrol and Submarine objects.
 */
class Ship
{
protected:
	int health; //!< The health of the ship.
	std::string name; //!< The name of the ship.
public:
	virtual Ship* clone() = 0; //!< Create and return a pointer to a copy of this object
	std::string getName() { return name; } //!< Returns the name of the ship
	int getHealth() { return health; } //!< Returns the health of the ship
};

/**
 * A derived class of Ship representing a Patrol
 */
class Patrol: public Ship
{
public:
	/**
	 * Constructs a Patrol with the specified name and health.
	 */
	Patrol(std::string n, int h)
	{
		name = n;
		health = h;
	}

	Ship* clone() { return new Patrol(name, health); } //!< Create and return a pointer to a copy of this object
};

/**
 * A derived class of Ship representing a Submarine
 */
class Submarine: public Ship
{
public:
	/**
	 * Constructs a Submarine with the specified name and health.
	 */
	Submarine(std::string n, int h)
		{
			name = n;
			health = h;
		}

	Ship* clone() { return new Submarine(name, health); } //!< Create and return a pointer to a copy of this object
};

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
	static Ship* getPatrol() {
		return patrolPrototype->clone();
	}
	/**
	 * Clone and return a pointer to a copy of its Submarine object prototype
	 */
	static Ship* getSubmarine() {
		return submarinePrototype->clone();
	}
};

Ship* ShipManager::patrolPrototype = new Patrol("Patrol Ship", 3);
Ship* ShipManager::submarinePrototype = new Submarine("Submarine Ship", 2);

int main()
{
	std::vector<Ship*> ships;
	std::string input;
	while (true)
	{
		std::cout << "Enter the name of an object to be created (Patrol or Submarine)" << std::endl;
		std::cin >> input;
		if (input == "Patrol" || input == "patrol") {
			ships.push_back(ShipManager::getPatrol());
		} else if (input == "Submarine" || input == "submarine") {
			ships.push_back(ShipManager::getSubmarine());
		}
		std::cout << "The current list of ships is: ";
		for (int i = 0; i < ships.size(); i++)
		{
			std::cout << ships[i]->getName();
			if (i < ships.size()-1)
			{
				std::cout << ", ";
			}
		}
		std::cout << "\n\n";
	}
}
