#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy) {
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = copy;
}

Cat& Cat::operator=(const Cat& assign) {
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &assign)
    {
        this->type = assign.type;
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}