#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    // ScavTrap c("Player2");
    FragTrap d("Player3");
    d.attack("Player2");
    d.print();
    // c.attack("Player3");
    // c.takeDamage(10);
    // c.beRepaired(5);
}