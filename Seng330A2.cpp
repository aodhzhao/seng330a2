#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "Ship.h"
#include "Patrol.h"
#include "Submarine.h"
#include "ShipManager.h"

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
	return 0;
}
