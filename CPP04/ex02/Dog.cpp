#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
    std::cout << "Dog Default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy) {
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog& assign) {
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &assign)
    {
        this->type = assign.type;
    }
    return *this;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}