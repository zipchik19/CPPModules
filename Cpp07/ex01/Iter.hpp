#pragma once
#include <iostream>
#include <string>

typedef std::string str;

template<typename T>
void	iter(T *adress, int lenght, void (*fct)(T& var));

template<typename T>
void	printValue(T val);