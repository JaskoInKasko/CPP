#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int fixedpoint;
		static const int fractionalbits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);


		Fixed(const int &num_int);
		Fixed(const float &num_float);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &output, Fixed const &fixed);

#endif