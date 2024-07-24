#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>
#include <cctype>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: ./convert <input>" << std::endl;
        return 1;
    }

    std::string arg = argv[1];
	ScalarConverter::convert(arg);

    return 0;
}