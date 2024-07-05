#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string input) {
	try {
		char *test = reinterpret_cast<char*>(&input);
		printChar(test);
	}
	catch (std::exception &e) {
		std::cout << "char: impossible" << std::endl;
	}
}

void ScalarConverter::printChar(char *c) {
	std::cout << "char: " << c << std::endl;
}