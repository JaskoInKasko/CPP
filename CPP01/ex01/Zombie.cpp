#include "Zombie.hpp"

Zombie::Zombie() {
    this->name = name;
    cout << "Constructor 1 has been called" << endl;
}

Zombie::~Zombie() {
    cout << name << " has been destroyed" << endl;
}

void Zombie::announce() {
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

Zombie* zombieHorde(int N, string name)
{
    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return horde;
}