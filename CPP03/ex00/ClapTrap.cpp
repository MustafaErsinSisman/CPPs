#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name(name)
{
	std::cout	<< Y << "Default constructor called"
			<< W << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout	<< B << "Copy constructor called"
			<< W << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout	<< "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->name = copy.name;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout	<< R << "Destructor called"
			<< W << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << C	<< "ClapTrap " << name
			<< " attacks " << "<target>"
			<< ", causing " << "<damage>"
			<< " points of damage!"
			<< W << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << M	<< "ClapTrap " << name
			<< " take damage " << "<damage>"
			<< " points of damage from " << "<target>."
			<< W << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << G	<< "ClapTrap " << name
			<< " be repaidre " << "<hitpoints>"
			<< " points of damage"
			<< W << std::endl;
}
