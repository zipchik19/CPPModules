#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<"Brain's constructor"<<std::endl;
}

Brain::Brain(const Brain &obj)
{
	for(int i = 0; i <= 100; i++)
	{
		this->ideas[i] = obj.ideas[i];
	}
	std::cout<<"Brain's copy constructor"<<std::endl;
}

Brain& Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for(int i = 0; i <= 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout<<"Brain's destructor"<<std::endl;
}