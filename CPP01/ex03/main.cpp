#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
		Weapon sword = Weapon("sword");

		HumanA Levi("Levi", sword);
		Levi.attack();
		sword.setType("double sword");
		Levi.attack();
	}
	{
		Weapon sword = Weapon("sword");

		HumanB Mikasa("Mikasa");
		Mikasa.attack();
		Mikasa.setWeapon(sword);
		Mikasa.attack();
		sword.setType("hammer");
		Mikasa.attack();
	}
	return 0;
}