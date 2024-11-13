#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal Default constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal& copy) {
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal& assign) {
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this != &assign)
    {
        this->type = assign.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal Destructor called" << std::endl;
}

std::string const Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Animal makes a generic sound" << std::endl;
}