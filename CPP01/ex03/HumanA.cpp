#include "HumanA.hpp"
#include "Weapon.hpp"

//refferences need to be initialized immediately in the initializer list when they are in a constructor
HumanA::HumanA(string name, Weapon &weaponREF) : weapon(weaponREF) {
    this->name = name;
}

HumanA::~HumanA() {}

void HumanA::attack() {
    cout << this->name << " attacks with their " << weapon.getType() << endl;
}