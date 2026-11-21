#include "ScalarConverter.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2)
	{
		std::cout << "Usage: ./convert <literal>" << std::endl;
        return 1;
	}
	Scalarconverter::convert(argv[1]);
	return 0;
}