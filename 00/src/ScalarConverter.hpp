#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <exception>
#include <string>
#include <iostream>
#include <iomanip> 

class ScalarConverter {
	private:	
		ScalarConverter();
		~ScalarConverter();
		// ScalarConverter(const ScalarConverter&); 
		// ScalarConverter& operator=(const ScalarConverter&);
	public:
		static void convert(std::string& input);
};

#endif