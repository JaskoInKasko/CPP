#include "Zombie.hpp"

Zombie::Zombie(string name) {
    this->name = name;
}

Zombie::~Zombie() {
    cout << name << " has been destroyed" << endl;
}

void Zombie::announce() {
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}