#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weaponREF) {
    this->weapon = &weaponREF;
}

void HumanB::attack() {
    if (weapon)
        std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack!" << std::endl;
}