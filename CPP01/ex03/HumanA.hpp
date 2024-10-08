#ifndef HumanA_H
# define HumanA_H
# include <iostream>
# include "Weapon.hpp"

using std::string;
using std::cout;
using std::endl;

class HumanA {
    private:
        string name;
        Weapon &weapon;
    public:
        HumanA(string name, Weapon &weaponREF);
        void attack();
        ~HumanA();
};

#endif