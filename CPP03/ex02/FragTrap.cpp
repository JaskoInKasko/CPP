#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->hp = 100;
    this->ep = 100;
    this->ad = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->hp = 100;
    this->ep = 100;
    this->ad = 30;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& assign) {
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &assign)
    {
        this->name = assign.name;
        this->hp = assign.hp;
        this->ep = assign.ep;
        this->ad = assign.ad;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (this->ep > 0)
        std::cout << "FragTrap " << this->name <<  " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl;
    else
        std::cout << "insufficient Energypoints. Current amount:" << this->ep << std::endl;
    this->ep--;
    std::cout << "Current ep: " << this->ep << std::endl;
    return ;
}

void FragTrap::takeDamage(unsigned int amount) {
    if (this->ep > 0)
    {
        std::cout << amount << " damage has beed taken" << std::endl;
        this->hp = this->hp - amount;
        std::cout << "Current hp: " << this->hp << std::endl;
    }
    else
        std::cout << "insufficient Energypoints. Current amount:" << this->ep << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    if (this->ep > 0)
    {
        std::cout << "FragTrap repairs itself by " << amount << " hp" << std::endl;
        this->hp = this->hp + amount;
        this->ep--;
        std::cout << "Current hp: " << this->hp << std::endl;
        std::cout << "Current ep: " << this->ep << std::endl;
    }
    else
        std::cout << "insufficient Energypoints. Current amount:" << this->ep << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap requests a highFive but its not reciprocated" << std::endl;
}