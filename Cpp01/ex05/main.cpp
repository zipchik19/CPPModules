#include "Harl.hpp"

int main()
{
	Harl xarl;
	std::string line;
	while (1)
	{
		std::cout<<"Enter the level('DEBUG', 'INFO', 'WARNING', 'ERROR') or EXIT: ";
		getline(std::cin, line);
		if(!line.compare("EXIT") || line.empty())
			return 0;
		xarl.complain(line);
	}
	return 0;
}