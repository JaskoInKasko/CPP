#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class Scalarconverter {
	private:
		Scalarconverter();
		Scalarconverter(const Scalarconverter&);
		Scalarconverter& operator=(const Scalarconverter&);
		~Scalarconverter();
	public:
		static void convert(const std::string &input);
};

#endif