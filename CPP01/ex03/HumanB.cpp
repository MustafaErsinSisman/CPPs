#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){};

void	HumanB::attack()
{
	if (weapon)
		std::cout << GREEN << name << YELLOW << " attacks with their " << RED << weapon->getType() << RESET << std::endl;
	else
		std::cout << GREEN << name << RED << " has no weapon " << RESET << std::endl;
}

void	HumanB::setWeapon()
{
	weapon = NULL;
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}

