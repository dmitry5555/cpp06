#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <cmath>

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
// ScalarConverter::ScalarConverter(const ScalarConverter&) {}
// ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) {
// 	return *this;
// }

void ScalarConverter::convert(std::string& input) {
    std::istringstream str_stream(input);

    if (input.length() == 1 && !std::isdigit(input[0])) {
        char c = input[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
		return;
    }

    if (input[input.length() - 1] == 'f' || input[input.length() - 1] == 'F') {
        input = input.substr(0, input.length() - 1);
        str_stream.str(input);
    }

    double value;
    if (str_stream >> value) {
        if (value >= 0 && value <= 127 && ::floor(value) == value) {
            if (std::isprint(static_cast<int>(value))) {
                std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
            } else {
                std::cout << "char: Non displayable" << std::endl;
            }
        } else {
            std::cout << "char: impossible" << std::endl;
        }
    } else {
        std::cout << "char: impossible" << std::endl;
    }

    str_stream.clear();
    str_stream.seekg(0);
    int int_value;
    if (str_stream >> int_value && ::floor(value) == value) {
        std::cout << "int: " << int_value << std::endl;
    } else {
        std::cout << "int: impossible" << std::endl;
    }

    str_stream.clear();
    str_stream.seekg(0);
    float float_value;
    if (str_stream >> float_value) {
        std::cout << "float: " << std::fixed << std::setprecision(1) << float_value << "f" << std::endl;
    } else {
        std::cout << "float: impossible" << std::endl;
    }

    str_stream.clear();
    str_stream.seekg(0);
    double double_value;
    if (str_stream >> double_value) {
        std::cout << "double: " << std::fixed << std::setprecision(1) << double_value << std::endl;
    } else {
        std::cout << "double: impossible" << std::endl;
    }
}

// void ScalarConverter::printChar(char *c) {
// 	std::cout << "char: " << c << std::endl;
// }