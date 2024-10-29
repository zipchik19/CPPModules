#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <list>

typedef std::string str;

template<class T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		MutantStack(MutantStack const &src);
		~MutantStack();

		MutantStack<T> &	operator=(MutantStack<T> const &rSym);

		typedef	typename std::stack<T>::container_type::iterator	iterator;
		iterator			begin();
		iterator			end();
	private:
};

template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src) : std::stack<T>(src) {
}

template<typename T>
MutantStack<T>::~MutantStack() {
}

template<typename T>
MutantStack<T> &	MutantStack<T>::operator=(MutantStack<T> const &rSym) {
	if (this != &rSym) {

	}
	return *this;
}


template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return std::stack<T>::c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return std::stack<T>::c.end();
}