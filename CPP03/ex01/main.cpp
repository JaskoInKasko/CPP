#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    //ClapTrap a;
    // ClapTrap b(a);
    // ClapTrap b("Player1");
    // b.attack("Enemy");
    // b.attack("Enemy");
    // b.attack("Enemy");
    // b.attack("Enemy");
    // b.attack("Enemy");
    // b.attack("Enemy");
    // b.attack("Enemy");
    // b.attack("Enemy");
    // b.attack("Enemy");
    // b.attack("Enemy");
    // b.takeDamage(5);
    // b.beRepaired(2);

    ScavTrap c("Player2");
    c.attack("Player1");
    c.takeDamage(10);
    c.beRepaired(5);
}