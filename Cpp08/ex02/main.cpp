#include "MutantStack.hpp"

int main()
{
	std::list<int> mstack;
	
	mstack.push_front(5);
	mstack.push_front(17);

	std::cout << mstack.front() << std::endl;

	mstack.pop_front();

	std::cout << mstack.size() << std::endl;

	mstack.push_front(3);
	mstack.push_front(5);
	mstack.push_front(737);

	mstack.push_front(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		ite--;
		std::cout << *ite << std::endl;
	}

	std::list<int> s(mstack);
	return 0;
}