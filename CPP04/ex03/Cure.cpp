#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {
    // std::cout << "Cure Default constructor called" << std::endl;
}

Cure::~Cure() {
    // std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
