#include "HumanB.hpp"

HumanB::HumanB( const std::string& name) : weapon(NULL), name(name) {}

void	HumanB::setWeapon( Weapon& newWeapon ) {weapon = &newWeapon;}

void	HumanB::attack()
{
	if (weapon)
		std::cout	<< G	<< name
				<< Y	<< " attacks with their "
				<< R	<< weapon->getType()
				<< W	<< std::endl;
	else
		std::cout	<< G	<< name
				<< R	<< " has no weapon "
				<< W	<< std::endl;
}
