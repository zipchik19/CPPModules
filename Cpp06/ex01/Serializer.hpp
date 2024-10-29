#pragma once
#include <iostream>
#include <cstdint>

typedef std::string str;

struct Data
{
    int valueInt;
    char valueFloat;
};

class Serializer {
	public:
		static uintptr_t	serialize(Data * ptr);
		static Data *		deserialize(uintptr_t raw);

	private:
		Serializer();
		Serializer(Serializer const &);
		~Serializer();
		Serializer &operator=(Serializer const &);
       
};