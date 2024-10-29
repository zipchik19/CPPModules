#pragma once
#include <iostream>
#include <string>

template<typename T>
void	Iter(T *adress, int lenght, void (*fct)(T& var))
{
	for (int i = 0; i < lenght; i++)
		fct(adress[i]);
}