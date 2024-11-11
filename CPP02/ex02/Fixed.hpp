#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

using	std::cout;
using	std::endl;

class Fixed {
	private:
		int fixedpoint;
		static const int fractionalbits = 8;
	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &fixed);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);


		Fixed(int  const &num_int);
		Fixed(float const &num_float);
		float toFloat(void) const;
		int toInt(void) const;

		static Fixed &min(Fixed &fp_num, Fixed &fp_num2);
		static Fixed const &min(Fixed const &fp_num, Fixed const &fp_num2);
		static Fixed &max(Fixed &fp_num, Fixed &fp_num2);
		static Fixed const &max(Fixed const &fp_num, Fixed const &fp_num2);
		Fixed operator+(Fixed const &fixed);
		Fixed operator-(Fixed const &fixed);
		Fixed operator*(Fixed const &fixed);
		Fixed operator/(Fixed const &fixed);
		bool operator<(const Fixed &rhs) const;
		bool operator>(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
};

std::ostream &operator<<(std::ostream &output, Fixed const &fixed);

#endif