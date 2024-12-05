#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->fixedpoint = 0;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(Fixed const &fixed) {
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






Fixed::Fixed(int const &num_int) {
    std::cout << "Int constructor called" << std::endl;
    this->fixedpoint = num_int * (1 << this->fractionalbits);
}

Fixed::Fixed(float const  &num_float) {
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




Fixed &Fixed::min(Fixed &fp_num, Fixed &fp_num2) {
    if (fp_num.getRawBits() > fp_num2.getRawBits())
        return fp_num2;
    return fp_num;
}

Fixed const &Fixed::min(Fixed const &fp_num, Fixed const &fp_num2) {
    if (fp_num.getRawBits() > fp_num2.getRawBits())
        return fp_num2;
    return fp_num;
}

Fixed &Fixed::max(Fixed &fp_num, Fixed &fp_num2) {
    if (fp_num.getRawBits() > fp_num2.getRawBits())
        return fp_num;
    return fp_num2;
}

Fixed const &Fixed::max(Fixed const &fp_num, Fixed const &fp_num2) {
    if (fp_num.getRawBits() > fp_num2.getRawBits())
        return fp_num;
    return fp_num2;
}

Fixed Fixed::operator+(Fixed const &fixed) {
    Fixed result;
    result.fixedpoint = this->fixedpoint + fixed.fixedpoint;
    return result;
}

Fixed Fixed::operator-(Fixed const &fixed) {
    Fixed result;
    result.fixedpoint = this->fixedpoint - fixed.fixedpoint;
    return result;
}

Fixed Fixed::operator*(Fixed const &fixed) {
    Fixed result;
    result.fixedpoint = (this->fixedpoint * fixed.fixedpoint) / 256;
    return result;
}

Fixed Fixed::operator/(Fixed const &fixed) {
    Fixed result;
    result.fixedpoint = (this->fixedpoint * 256) / fixed.fixedpoint;
    return result;
}

bool Fixed::operator<(const Fixed &rhs) const {
    if (this->fixedpoint < rhs.fixedpoint)
        return true;
    else
        return false;
}

bool Fixed::operator>(const Fixed &rhs) const {
    if (this->fixedpoint > rhs.fixedpoint)
        return true;
    else
        return false;
}

bool Fixed::operator<=(const Fixed &rhs) const {
    if (this->fixedpoint <= rhs.fixedpoint)
        return true;
    else
        return false;
}

bool Fixed::operator>=(const Fixed &rhs) const {
    if (this->fixedpoint >= rhs.fixedpoint)
        return true;
    else
        return false;
}

bool Fixed::operator==(const Fixed &rhs) const {
    if (this->fixedpoint == rhs.fixedpoint)
        return true;
    else
        return false;
}

bool Fixed::operator!=(const Fixed &rhs) const {
    if (this->fixedpoint != rhs.fixedpoint)
        return true;
    else
        return false;
}

Fixed& Fixed::operator++() {
    ++this->fixedpoint;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++this->fixedpoint;
    return temp;
}

Fixed& Fixed::operator--() {
    --this->fixedpoint;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    --this->fixedpoint;
    return temp;
}
