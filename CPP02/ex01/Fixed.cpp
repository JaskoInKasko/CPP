#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->fixedpoint = 0;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->fixedpoint = fixed.fixedpoint;
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedpoint;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedpoint = raw;
}



Fixed::Fixed(const int &num_int) {
    std::cout << "Int constructor called" << std::endl;
    this->fixedpoint = num_int * (1 << this->fractionalbits);
}

Fixed::Fixed(const float &num_float) {
    std::cout << "Float constructor called" << std::endl;
    this->fixedpoint = roundf(num_float * (1 << this->fractionalbits));
}

int Fixed::toInt(void) const {
    return this->fixedpoint >> fractionalbits;
}

float Fixed::toFloat(void) const {
    return (float)this->fixedpoint / (1 << fractionalbits);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return os;
}