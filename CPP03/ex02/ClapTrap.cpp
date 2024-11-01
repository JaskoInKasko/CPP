#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->hp = 10;
    this->ep = 10;
    this->ad = 0;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->name = name;
    this->hp = 10;
    this->ep = 10;
    this->ad = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& assign) {
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &assign)
    {
        this->name = assign.name;
        this->hp = assign.hp;
        this->ep = assign.ep;
        this->ad = assign.ad;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->ep > 0)
        std::cout << "ClapTrap " << this->name <<  " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl;
    else
        std::cout << "insufficient Energypoints. Current amount:" << this->ep << std::endl;
    this->ep--;
    std::cout << "Current ep: " << this->ep << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->ep > 0)
    {
        std::cout << amount << " damage has beed taken" << std::endl;
        this->hp = this->hp - amount;
        std::cout << "Current hp: " << this->hp << std::endl;
    }
    else
        std::cout << "insufficient Energypoints. Current amount:" << this->ep << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->ep > 0)
    {
        std::cout << "ClapTrap repairs itself by " << amount << " hp" << std::endl;
        this->hp = this->hp + amount;
        this->ep--;
        std::cout << "Current hp: " << this->hp << std::endl;
        std::cout << "Current ep: " << this->ep << std::endl;
    }
    else
        std::cout << "insufficient Energypoints. Current amount:" << this->ep << std::endl;
}