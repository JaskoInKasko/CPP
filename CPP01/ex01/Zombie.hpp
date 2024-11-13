#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		Zombie(); 	
		void announce();
		void setName(std::string name);
		~Zombie();
};

#endif