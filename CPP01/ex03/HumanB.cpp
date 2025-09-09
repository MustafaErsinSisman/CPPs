#include "HumanB.hpp"

HumanB::HumanB( std::string name) : name(name), weapon(NULL) {}

void	HumanB::attack()
{
	if (weapon)
		std::cout	<< G	<< name
				<< Y	<< " attacks with their "
				<< R		<< weapon->getType()
				<< W	<< std::endl;
	else
		std::cout	<< G	<< name
				<< R		<< " has no weapon "
				<< W	<< std::endl;
}

void	HumanB::setWeapon( Weapon& newWeapon ) {weapon = &newWeapon;}

