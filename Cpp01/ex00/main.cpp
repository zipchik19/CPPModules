#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie* valod = newZombie("valod");
	valod->announce();
	randomChump("Zipchik");
	delete valod;
	return 0;
}