#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap &operator=(const ScavTrap& assign);
        void attack(const std::string& target);
        ~ScavTrap();

        void guardGate();
};

#endif