#include <fstream> 
#include <iostream> 
#include "Rep.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	Replace reap(argv[0], argv[1], argv[2]);
	reap.mainFunc();
	return 0;
}