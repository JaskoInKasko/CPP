#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: virtual public ScavTrap, virtual public FragTrap {
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string name);
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap &operator=(const DiamondTrap& assign);
        void attack(const std::string& target);
        ~DiamondTrap();

        void whoAmI();
};

#endif