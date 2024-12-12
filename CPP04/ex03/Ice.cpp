#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {
    // std::cout << "Ice Default constructor called" << std::endl;
}

Ice::~Ice() {
    // std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
