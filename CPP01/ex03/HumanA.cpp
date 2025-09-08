#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon){};

void	HumanA::attack()
{
	std::cout << GREEN << name << YELLOW << " attacks with their " << RED << weapon.getType() << RESET << std::endl;
}