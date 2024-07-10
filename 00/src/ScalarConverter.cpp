#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string input) {

	std::cout << "char: ";
	try {
		int num = std::stoi(input);
		if (num >= 0 && num <= 255) {
			char c = static_cast<char>(num);
			if (std::isprint(c)) {
				std::cout << c << std::endl;
			} else {
				std::cout << "impossible" << std::endl;
			}
		}
		else {
			std::cout << "impossible" << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
		// errorOccurred = true;
	}

	std::cout << "int: ";
	try {
		std::cout << std::stoi(input) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}

	// float
	std::cout << "float: ";
	try {
		std::cout << std::fixed << std::setprecision(1) << std::stof(input) << "f" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}

	// double
	std::cout << "double: ";
	try {
		std::cout << std::fixed << std::setprecision(1) << std::stod(input) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}

}

void ScalarConverter::printChar(char *c) {
	std::cout << "char: " << c << std::endl;
}