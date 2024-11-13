#ifndef HumanB_H
# define HumanB_H
# include <iostream>
# include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon *weapon;

    public:
        HumanB(std::string name);
        void setWeapon(Weapon &weaponREF);
        void attack();
        ~HumanB();
};

#endif