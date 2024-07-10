#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <exception>
#include <string>
#include <iostream>
#include <iomanip> 

class ScalarConverter {
	private:
		ScalarConverter() {}

	public:
		static void convert(std::string input);
	
	private:
		static void printChar(char *c);
};

#endif