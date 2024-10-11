#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(std::string);
		~Cat();
		Cat(const Cat&);
		Cat& operator= (const Cat&);
		void makeSound();
};