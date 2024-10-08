#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Zombie {
	private:
		string name;
	public:
		Zombie(string name);
		~Zombie();
		void announce();
};

#endif