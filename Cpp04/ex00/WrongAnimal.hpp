#pragma once
#include <iostream>

class WrongAnimal
{
	protected:
		std::string m_type;
	public:
		WrongAnimal();
		WrongAnimal(const std::string);
		WrongAnimal(const WrongAnimal &);
		WrongAnimal& operator=(const WrongAnimal &);
		void makeSound();
		~WrongAnimal();
};