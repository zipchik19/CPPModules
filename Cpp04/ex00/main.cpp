#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	Animal* j = new Dog();
	Animal* i = new Cat();

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete i;
	delete j;

	// WrongAnimal* a = new WrongAnimal();
	// WrongAnimal* w = new WrongCat();

	// w->makeSound();
	// a->makeSound();
	// delete a;
	// delete w;
	return 0;
}