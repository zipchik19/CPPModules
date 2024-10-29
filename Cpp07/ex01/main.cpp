#include "Iter.hpp"

template<typename T>
void	printValue(T& val){
	std::cout << val;
}

int	main() {
	char	array[] = {'a', 'b', 'c', 'd'};

	::Iter(array, 4, ::printValue<char>);
}