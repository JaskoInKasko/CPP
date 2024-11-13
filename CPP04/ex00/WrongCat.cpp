#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy) {
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& assign) {
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    if (this != &assign)
    {
        this->type = assign.type;
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor called" << std::endl;
}

std::string const WrongCat::getType() const {
    return type;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat makes a weird sound" << std::endl;
}