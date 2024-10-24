#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	private:
		int fixedpoint;
		static const int fractionalbits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& fixed);
		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif