#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main()
{
    Zombie* z;

    z = newZombie("FOO");
    z->announce();
    randomChump("BAR");
    delete z;
    return 0;
}