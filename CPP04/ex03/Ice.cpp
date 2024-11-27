#include "Ice.hpp"

AMateria* clone() const {
    return new Ice(*this);
}