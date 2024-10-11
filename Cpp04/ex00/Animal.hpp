#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string m_type;
	public:
		Animal();
		Animal(const std::string);
		Animal(const Animal &);
		Animal& operator=(const Animal &);
		virtual void makeSound();
		virtual ~Animal();
};