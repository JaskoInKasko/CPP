#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weaponREF) : weapon(weaponREF) {
    this->name = name;
}

HumanA::~HumanA() {}

void HumanA::attack() {
    std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}