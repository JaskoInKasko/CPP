#include "Character.hpp"

Character::Character(std::string const & name) : name(name) {
    // std::cout << "Character Default constructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
        inventory[i] = 0;
    unequippedCount = 0;
}

Character::Character(const Character& copy) : name(copy.name) {
    std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        if (copy.inventory[i])
            inventory[i] = copy.inventory[i]->clone();
        else
            inventory[i] = 0;
    }
    unequippedCount = 0;
}

Character& Character::operator=(const Character& copy) {
    std::cout << "Character assignment operator called" << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 4; ++i)
            delete inventory[i];
        name = copy.name;
        for (int i = 0; i < 4; ++i)
        {
            if (copy.inventory[i])
                inventory[i] = copy.inventory[i]->clone();
            else
                inventory[i] = 0;
        }
    }
    return *this;
}

Character::~Character() {
    // std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        if (inventory[i])
            delete inventory[i];
    }
    for (int i = 0; i < unequippedCount; ++i)
    {
        if (unequipped[i])
            delete unequipped[i];
    }
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria* m) {

    for (int i = 0; i < 4; ++i)
        if (inventory[i] == m)
            return ;
    for (int i = 0; i < 4; ++i)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            return ;
        }
    }
    delete m;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
    {
        unequipped[unequippedCount++] = inventory[idx];
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}