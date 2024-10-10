#ifndef FIXED_H
# define FIXED_H

# include <iostream>

using	std::cout;
using	std::endl;

class Fixed {
	private:
		int fixedpoint;
		static const int fractionalbits;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& fixed);
		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif