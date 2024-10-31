#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdexcept>

typedef std::string str;

template <typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &);
		~Array();

		Array &	operator=(Array const &ref);
		const T &operator[](const size_t ) const;
		T &operator[](const size_t );
		int		size() const;
		
		class OutOfBoundException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	private:
		T *	m_array;
		size_t	m_size;
};

template<typename T>
Array<T>::Array() : m_array(new T[0]), m_size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) {
    m_array = new T[n + 1];
    m_size = n;
};

template <typename T>
Array<T>::Array(const Array &obj) {
    m_size = obj.m_size;
    m_array = new T[m_size + 1];
    for (size_t i = 0; i < m_size; i++) {
        m_array[i] = obj.m_array[i];
    }
};

template<typename T>
Array<T>::~Array() {
	delete [] this->m_array;
}

template<typename T>
Array<T> &	Array<T>::operator=(Array<T> const &rSym) {
	if (this != &rSym) {
		delete [] this->m_array;
		this->m_array = new T[rSym.m_size + 1];
		this->m_size = rSym.m_size;
		for (size_t i = 0; i < rSym.m_size; i++)
			this->m_array[i] = rSym.m_array[i];
	}
	return *this;
}

template<typename T>
const T &Array<T>::operator[](const size_t index) const {
    if (index < 0 || index > m_size - 1 || m_array == NULL) {
        throw Array::OutOfBoundException();
    }
    return (m_array[index]);
};

template <typename T>
T &Array<T>::operator[](const size_t index) {
    if (index < 0 || index > m_size - 1 || m_array == NULL) {
        throw Array::OutOfBoundException();
    }
    return (m_array[index]);
};

template <typename T>
const char* Array<T>::OutOfBoundException::what() const throw()
{
	return ("Value is out of bound.");
}

template<typename T>
int		Array<T>::size() const {
	return this->m_size;
}