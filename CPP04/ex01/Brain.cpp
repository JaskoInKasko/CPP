#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy) {
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = copy;
}

Brain& Brain::operator=(const Brain& assign) {
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this != &assign)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = assign.ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain Destructor called" << std::endl;
}

void Brain::setIdea(std::string _idea, int i) {
    if (i >= 0 && i < 100)
        this->ideas[i] = _idea;
    std::cout << "idea couldn't be set due to lack of Brain size" << std::endl;
    return ;
}

std::string Brain::getIdea(int i) {
    if (i >= 0 && i < 100)
    {
        if (ideas[i].length() == 0)
            return "This part of the Brain is empty";
        return this->ideas[i];
    }
    return "Index number out of range";
}