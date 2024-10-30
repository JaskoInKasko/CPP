#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->hp = 100;
    this->ep = 50;
    this->ad = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->name = name;
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
        std::cout << "ScavTrap " << this->name <<  " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl;
    else
        std::cout << "insufficient Energypoints. Current amount:" << this->ep << std::endl;
    this->ep--;
    std::cout << "Current ep: " << this->ep << std::endl;
    return ;
}

void ScavTrap::takeDamage(unsigned int amount) {
    if (this->ep > 0)
    {
        std::cout << amount << " damage has beed taken" << std::endl;
        this->hp = this->hp - amount;
        std::cout << "Current hp: " << this->hp << std::endl;
    }
    else
        std::cout << "insufficient Energypoints. Current amount:" << this->ep << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    if (this->ep > 0)
    {
        std::cout << "ScavTrap repairs itself by " << amount << " hp" << std::endl;
        this->hp = this->hp + amount;
        this->ep--;
        std::cout << "Current hp: " << this->hp << std::endl;
        std::cout << "Current ep: " << this->ep << std::endl;
    }
    else
        std::cout << "insufficient Energypoints. Current amount:" << this->ep << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is not in Gate keeper mode" << std::endl;
}