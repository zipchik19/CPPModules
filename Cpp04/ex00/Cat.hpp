#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string);
		~Cat();
		Cat(const Cat&);
		Cat& operator= (const Cat&);
		void makeSound();
};