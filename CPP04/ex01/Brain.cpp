#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy) {
    (void) copy;
    std::cout << "Brain Copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& assign) {
    (void)assign;
    std::cout << "Brain Copy assignment operator called" << std::endl;
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain Destructor called" << std::endl;
}