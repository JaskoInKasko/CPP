#include "HumanB.hpp"

HumanB::HumanB(string name) {
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weaponREF) {
    this->weapon = &weaponREF;
}

void HumanB::attack() {
    if (weapon)
        cout << this->name << " attacks with their " << weapon->getType() << endl;
    else
        cout << this->name << " has no weapon to attack!" << endl;
}