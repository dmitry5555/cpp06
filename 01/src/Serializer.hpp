#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <exception>
#include <string>
#include <iostream>
#include <iomanip> 

struct Data {
	int value;
	std::string name;
};

class Serializer {
	private:
		Serializer() {};
	public:
		static Data* deserialize(uintptr_t raw);
		static uintptr_t serialize(Data* ptr);
};

#endif