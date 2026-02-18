#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << G	<< "DiamondTrap " << name
			<< " default constructor was executed"
			<< RST << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	std::cout << B	<< "DiamondTrap " << name
			<< " copy constructor was executed"
			<< RST << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	if (this != &copy)
			ClapTrap::operator=(copy);
	std::cout << Y	<< "DiamondTrap " << name
			<< " copy assignment operator was executed"
			<< RST << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << R	<< "DiamondTrap " << name
			<< " destructor was executed"
			<< RST << std::endl;
}
void DiamondTrap::whoAmI()
{
	
}
