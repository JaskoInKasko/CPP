#include "Zombie.hpp"

Zombie* newZombie(string name);
void    randomChump(string name);

int main()
{
    Zombie* z;

    z = newZombie("FOO");
    z->announce();
    randomChump("BAR");
    delete z;
    return 0;
}