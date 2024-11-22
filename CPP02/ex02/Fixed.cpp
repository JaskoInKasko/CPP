#include "Fixed.hpp"

Fixed::Fixed() {
    cout << "Default constructor called" << endl;
    this->fixedpoint = 0;
}

Fixed::~Fixed() {
    cout << "Destructor called" << endl;
}

Fixed::Fixed(Fixed const &copy) {
    cout << "Copy constructor called" << endl;
    *this = copy;
}

Fixed& Fixed::operator=(Fixed const &fixed) {
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






Fixed::Fixed(int const &num_int) {
    cout << "Int constructor called" << endl;
    this->fixedpoint = num_int * (1 << this->fractionalbits);
}

Fixed::Fixed(float const  &num_float) {
    cout << "Float constructor called" << endl;
    this->fixedpoint = roundf(num_float * (1 << this->fractionalbits));
}

int Fixed::toInt(void) const {
    return this->fixedpoint >> fractionalbits;
}

float Fixed::toFloat(void) const {
    // std::cout << (float)this->fixedpoint << std::endl;
    return (float)this->fixedpoint / (1 << fractionalbits);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return os;
}




Fixed min(Fixed &fp_num, Fixed &fp_num2) {
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
