#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : weapon(weapon), name(name) {}

void	HumanA::attack()
{
	std::cout	<< G	<< name
			<< Y	<< " attacks with their "
			<< R	<< weapon.getType()
			<< W	<< std::endl;
}