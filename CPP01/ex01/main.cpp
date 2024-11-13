#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    Zombie* z;

    z = zombieHorde(5, "FOO");
    for (int i = 0; i < 5; i++)
        z[i].announce();
    delete[] z;
    return 0;
}