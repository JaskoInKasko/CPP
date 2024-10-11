#include "Fixed.hpp"

Fixed::Fixed() {
    cout << "Default constructor called" << endl;
    this->fixedpoint = 0;
}

Fixed::~Fixed() {
    cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed &copy) {
    cout << "Copy constructor called" << endl;
    this->fixedpoint = copy.fixedpoint;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
    cout << "Copy assignment operator called" << endl;
    if (this != &fixed)
        this->fixedpoint = fixed.fixedpoint;
    return *this;
}

int Fixed::getRawBits(void) const {
    cout << "getRawBits member function called" << endl;
    return this->fixedpoint;
}

void Fixed::setRawBits(int const raw) {
    cout << "setRawBits member function called" << endl;
    this->fixedpoint = raw;
}



Fixed::Fixed(const int &num_int) {
    cout << "Int constructor called" << endl;
    this->fixedpoint = num_int * (1 << this->fractionalbits);
}

Fixed::Fixed(const float &num_float) {
    cout << "Float constructor called" << endl;
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