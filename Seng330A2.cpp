#include <iostream>

class Ship
{
public:
	virtual std::string getName() = 0;
	virtual int getHealth() = 0;
	virtual Ship* clone() = 0;
};

int main()
{
	std::cout << "Hi";
}
