#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie* valod = ZombieHorde(5, "valodik");
	for(int i = 0; i< 5; i++)
    {
        valod[i].announce("valod?");
    }
	delete[] valod;
	return 0;
}