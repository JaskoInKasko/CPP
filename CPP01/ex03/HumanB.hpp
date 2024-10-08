#ifndef HumanB_H
# define HumanB_H
# include <iostream>
# include "Weapon.hpp"

using std::string;
using std::cout;
using std::endl;

class HumanB {
    private:
        string name;
        Weapon *weapon;

    public:
        HumanB(string name);
        void setWeapon(Weapon &weaponREF);
        void attack();
        ~HumanB();
};

#endif