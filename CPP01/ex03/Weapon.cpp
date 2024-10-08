#include "Weapon.hpp"

Weapon::Weapon(string weaponType) {
    type = weaponType;
}

const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(string newType) {
    type = newType;
}