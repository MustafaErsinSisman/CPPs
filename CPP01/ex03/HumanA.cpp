#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : name(name), weapon(weapon) {}

void	HumanA::attack()
{
	std::cout	<< G	<< name
			<< Y	<< " attacks with their "
			<< R	<< weapon.getType()
			<< W	<< std::endl;
}