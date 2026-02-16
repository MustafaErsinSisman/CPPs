#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout	<< G << "Default constructor called"
			<< RST << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout	<< B << "Copy constructor called"
			<< RST << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	std::cout	<< Y << "Copy assignment operator called" << RST << std::endl;
	if (this != &copy)
		this->name = copy.name;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout	<< R << "Destructor called"
			<< RST << std::endl;
}
