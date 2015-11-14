#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <vector>
#include "Ship.h"
#include "Patrol.h"
#include "Submarine.h"
#include "ShipManager.h"

void serialize(std::vector<Ship*> ships, std::string filename)
{
	std::ofstream outfile;
	outfile.open(filename);
	outfile << "{" << std::endl;
	outfile << "\t\"ships\":[" << std::endl;
	for (int i = 0; i < ships.size(); i++)
	{
		outfile << "\t\t{\"name\":\"" << ships[i]->getName() << "\", \"health\":\"" << ships[i]->getHealth() << "\"}";
		if (i < ships.size()-1)
		{
			outfile << ",";
		}
		outfile << std::endl;
	}
	outfile << "\t]" << std::endl;
	outfile << "}" << std::endl;
	outfile.close();
}

int main()
{
	std::vector<Ship*> ships;
	std::string input;

	while (true)
	{
		std::cout << "Enter the name of an object to be created (Patrol or Submarine)" << std::endl;
		std::cin >> input;
		if (input == "Patrol" || input == "patrol")
		{
			ships.push_back(ShipManager::getPatrol());
		}
		else if (input == "Submarine" || input == "submarine")
		{
			ships.push_back(ShipManager::getSubmarine());
		}
		else if (input == "q")
		{
			break;
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
	serialize(ships, "ships.txt");

	return 0;
}
