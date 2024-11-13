#ifndef HumanA_H
# define HumanA_H
# include <iostream>
# include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string name, Weapon &weaponREF);
        void attack();
        ~HumanA();
};

#endif