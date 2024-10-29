#pragma once
#include <iostream>
#include <string>

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T a, T b)
{
	return (b <= a) ? b : a;
}

template<typename T>
T	max(T a, T b)
{
	return (b >= a) ? b : a;
}