#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "Constructor 1 has been called" << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " has been destroyed" << std::endl;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return horde;
}