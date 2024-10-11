#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string);
		~Dog();
		Dog(const Dog&);
		Dog& operator= (const Dog&);
		void makeSound();
};