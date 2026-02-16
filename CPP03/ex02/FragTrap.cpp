#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << G	<< "FragTrap " << name
			<< " default constructor was executed"
			<< RST << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << B	<< "FragTrap " << name
			<< " copy constructor was executed"
			<< RST << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	if (this != &copy)
		ClapTrap::operator=(copy);
	std::cout << Y	<< "FragTrap " << name
			<< " copy assignment operator was executed"
			<< RST << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << R	<< "FragTrap " << name
			<< " destructor was executed"
			<< RST << std::endl;
}

void FragTrap::highFiveGuys()
{
	std::cout << MB	<< W << "FragTrap " << name
			<< " is high five guys."
			<< RST << std::endl;
}
