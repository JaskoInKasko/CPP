#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    this->hp = FragTrap::hp;
    this->ep = ScavTrap::ep;
    this->ad = FragTrap::ad;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    this->name = name;
    this->hp = FragTrap::hp;
    this->ep = ScavTrap::ep;
    this->ad = FragTrap::ad;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(), FragTrap() {
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& assign) {
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this != &assign)
    {
        this->name = assign.name;
        this->hp = assign.hp;
        this->ep = assign.ep;
        this->ad = assign.ad;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    if (this->ep > 0)
        std::cout << "ScavTrap " << ScavTrap::name <<  " attacks " << target << ", causing " << ScavTrap::ad << " points of damage!" << std::endl;
    else
        std::cout << "insufficient Energypoints. Current amount:" << ScavTrap::ep << std::endl;
    ScavTrap::ep--;
    std::cout << "Current ep: " << ScavTrap::ep << std::endl;
    return ;
}

void DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTraps name: " << this->name << std::endl;
    std::cout << "ClapTraps name: " << ClapTrap::name << std::endl;
}