#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){};

void	HumanB::attack()
{
	std::cout << GREEN << name << YELLOW << " attacks with their " << RED << weapon->getType() << RESET << std::endl;
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}

