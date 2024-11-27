#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
    this->type = type;
}

std::string const & AMateria::getType() const {
    return this->type;
}

AMateria* clone() const = 0;