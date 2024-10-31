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