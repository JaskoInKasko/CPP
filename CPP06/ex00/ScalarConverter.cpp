#include "ScalarConverter.hpp"
#include <limits>
#include <cstdlib>
#include <cmath>
#include <iomanip>

Scalarconverter::Scalarconverter() {}

Scalarconverter::Scalarconverter(const Scalarconverter&) {}

Scalarconverter& Scalarconverter::operator=(const Scalarconverter&){return *this;}

Scalarconverter::~Scalarconverter() {}



bool isChar(const std::string &input) {
	if (input.length() == 1 && !isdigit(input[0]))
		return 0;
	return 1;
}

bool isInt(const std::string &input) {
	char *end;
	std::strtol(input.c_str(), &end, 10);
	if (*end == '\0')
		return 0;
	return 1;
}

bool isFloat(const std::string &input) {
	char *end;

	std::strtof(input.c_str(), &end);
	if (end[0] == 'f' && end[1] == '\0')
		return 0;
	return 1;
}

bool isDouble(const std::string &input) {
	char *end;

	std::strtod(input.c_str(), &end);
	if (end[0] == '\0')
		return 0;
	return 1;
}

void Scalarconverter::convert(const std::string &input) {
	double d = 0.0;
	bool isSpecial = false;

	if (input == "nan") {
		d = std::numeric_limits<double>::quiet_NaN();
		isSpecial = true;
	}
	else if (input == "+Inff") {
		d = std::numeric_limits<float>::infinity();
		isSpecial = true;
	}
	else if (input == "-Inff") {
		d = -std::numeric_limits<float>::infinity();
		isSpecial = true;
	}
	else if (input == "+Inf") {
		d = std::numeric_limits<double>::infinity();
		isSpecial = true;
	}
	else if (input == "-Inf") {
		d = -std::numeric_limits<double>::infinity();
		isSpecial = true;
	}
	if (isSpecial == true)
	{
		std::cout << "char: Impossible\n";
		std::cout << "int: Impossible\n";
		std::cout << "float: " << (std::isnan(d) ? "nanf" : (d < 0 ? "-inff" : "+inff")) << "\n";
		std::cout << "double: " << (std::isnan(d) ? "nan" : (d < 0 ? "-inf" : "+inf")) << "\n";
		return ;
	}


	
	if (isInt(input) == 0)
		d = static_cast<double>(std::atoi(input.c_str()));
	else if (isChar(input) == 0)
		d = static_cast<double>(input[0]);
	else if (isFloat(input) == 0)
		d = static_cast<double>(std::atof(input.c_str()));
	else if (isDouble(input) == 0)
		d = std::atof(input.c_str());
	else {
		std::cout << "Invalid input\n";
		return ;
	}

	// double
	std::cout << "double: " << std::fixed << std::setprecision(1) <<  d << "\n";

	// float
	std::cout << "float: " << std::fixed << std::setprecision(1) <<  static_cast<float>(d) << "f\n";
	
	// int
	if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
		std::cout << "int: Impossible\n";
	else
		std::cout << "int: " << static_cast<int>(d) << "\n";

	// char
	if (d < 0 || d > 127)
		std::cout << "char: Impossible\n";
	else if (!isprint(static_cast<char>(d)))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: " << static_cast<char>(d) << "\n";
}