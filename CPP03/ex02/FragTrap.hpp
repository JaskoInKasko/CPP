#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    public:
        FragTrap();
        FragTrap(const std::string name);
        FragTrap(const FragTrap& copy);
        FragTrap &operator=(const FragTrap& assign);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~FragTrap();

        void highFivesGuys(void);
};

#endif