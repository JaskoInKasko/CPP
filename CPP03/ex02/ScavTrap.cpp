#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->hp = 100;
    this->ep = 50;
    this->ad = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
    this->hp = 100;
    this->ep = 50;
    this->ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& assign) {
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &assign)
    {
        this->name = assign.name;
        this->hp = assign.hp;
        this->ep = assign.ep;
        this->ad = assign.ad;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->ep > 0)
    {
        std::cout << "ScavTrap " << this->name <<  " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl;
        this->ep--;
    }
    else
        std::cout << "insufficient Energypoints.\nCurrent amount: " << this->ep << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is not in Gate keeper mode" << std::endl;
}