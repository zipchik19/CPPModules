#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <stdexcept>

typedef std::string str;

class NoValueException : public std::exception {
	public:
		virtual const char *	what() const throw();
};

template<typename T>
int	easyfind(T const & array, int val);

const char *	NoValueException::what() const throw() {
	return "No occurrence found in the container.";
}

template<typename T>
int	easyfind(T const & array, int val) {
	typename T::const_iterator	it;
	typename T::const_iterator	ite = array.end();

	for (it = array.begin(); it != ite; ++it) {
		if (*it == val)
			return *it;
	}
	throw NoValueException();
}