#include "ClapTrap.hpp"

int main()
{
    //ClapTrap a;
    // ClapTrap b(a);
    ClapTrap b("Player1");
    b.attack("Enemy");
    b.attack("Enemy");
    b.attack("Enemy");
    b.attack("Enemy");
    b.attack("Enemy");
    b.attack("Enemy");
    b.attack("Enemy");
    b.attack("Enemy");
    b.attack("Enemy");
    b.attack("Enemy");
    b.takeDamage(5);
    b.beRepaired(2);
}