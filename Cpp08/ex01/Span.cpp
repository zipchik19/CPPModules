#include "Span.hpp"

Span::Span() : m_maxSize(0), m_size(0) {}

Span::Span(unsigned int N) : m_maxSize(N), m_size(0) {}

Span::Span(Span const &src) {
	this->m_array = src.m_array;
	this->m_maxSize = src.m_maxSize;
	this->m_size = src.m_size;
}

Span::~Span() {
}

Span &	Span::operator=(Span const &rSym) {
	if (this != &rSym) {
		this->m_array = rSym.m_array;
		this->m_maxSize = rSym.m_maxSize;
		this->m_size = rSym.m_size;
	}
	return *this;
}

void				Span::addNumber(int n) {
	if (this->m_size == this->m_maxSize)
		throw Span::MaxNumbersException();
	this->m_array.push_back(n);
	this->m_size++;
}

void				Span::bigAdd(int n) {
	if (this->m_size + n > this->m_maxSize) {
		std::cout << "Can't add " << n << " elements to the array, the maxm_size will be reached." << std::endl; return;
	}
	
	int nb = 0;
	
	for (int i = 0; i < n; i++) {
		nb = rand() % 100 + 1;
		this->addNumber(nb);
		std::cout << this->m_size << " / " << this->m_maxSize << " : " << nb << std::endl;
	}
}

int					Span::shortestSpan() {
	std::vector<int>	array(this->m_array);
	
	if (!array.size())
		throw Span::NoNumberException();
	if (array.size() == 1)
		throw Span::OneNumberException();

	

	int									min = __INT_MAX__;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = 	array.end();
	
	std::sort(array.begin(), array.end());
	
	for (it = array.begin(); it != --ite; it++) {
		if ((*(it + 1) - *it) < min) {
			min = (*(it + 1) - *it);
		}
	}
	return min;
}

int					Span::longestSpan() const {
	if (!this->m_array.size())
		throw Span::NoNumberException();
	if (this->m_array.size() == 1)
		throw Span::OneNumberException();
		
	int	max = *std::max_element(this->m_array.begin(), this->m_array.end());
	int	min = *std::min_element(this->m_array.begin(), this->m_array.end());

	return max - min;
}

const char *		Span::MaxNumbersException::what() const throw() {
	return "Can't add a new number to the array: max size reached";
}

const char *	Span::NoNumberException::what() const throw() {
	return "The requested range cannot be found: array is empty.";
}

const char *	Span::OneNumberException::what() const throw() {
	return "The requested range cannot be found: array contain only one number.";
}