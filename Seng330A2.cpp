#include <iostream>
#include <string>
#include <list>
#include <vector>

class Ship
{
protected:
	int health;
	std::string name;
public:
	virtual Ship* clone() = 0;
	std::string getName() { return name; }
	int getHealth() { return health; }
};

class Patrol: public Ship
{
public:
	Patrol(std::string n, int h)
	{
		name = n;
		health = h;
	}

	Ship* clone() { return new Patrol(name, health); }
};

class Submarine: public Ship
{
public:
	Submarine(std::string n, int h)
		{
			name = n;
			health = h;
		}

	Ship* clone() { return new Submarine(name, health); }
};

class ShipManager
{
private:
	static Ship* patrolPrototype;
	static Ship* submarinePrototype;

public:
	static Ship* getPatrol() {
		return patrolPrototype->clone();
	}

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
