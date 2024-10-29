#include <fstream> 
#include <iostream> 
#include "Rep.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout<<"Write the filname, the string1 which need to be replaced by string2"<<std::endl;
		return (1);
	}
	Replace reap(argv[1], argv[2], argv[3]);
	reap.mainFunc();
	return 0;
}