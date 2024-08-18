#include "Zombie.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if(ac != 3)
	{
		std::cout << "Wrong parameters,please try again!" << std::endl;
	}
	else
	{

		Zombie *z = zombieHorde(atoi(av[1]),av[2]);
		for(int i = 0; i < atoi(av[1]);i++)
		{
			z[i].announce();
		}
		delete[] z;
	}
}