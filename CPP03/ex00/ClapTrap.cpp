#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout	<< G << "Default constructor called"
			<< RST << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout	<< B << "Copy constructor called"
			<< RST << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout	<< Y << "Copy assignment operator called" << RST << std::endl;
	if (this != &copy)
		this->name = copy.name;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout	<< R << "Destructor called"
			<< RST << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0)
	{
		std::cout << GB << W << "ClapTrap " << name
				<< " has no hit points!"
				<< RST << std::endl;
	}
	else if (this->energyPoints == 0)
	{
		std::cout << BB << W << "ClapTrap " << name
				<< " has no energy points!"
				<< RST << std::endl;
	}
	else
	{
		std::cout << WB	<< R << "ClapTrap " << name
				<< " attacks " << target
				<< ", causing " << attackDamage
				<< " points of damage!"
				<< RST << std::endl;
		this->energyPoints--;
	}
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << RB	<< W << "ClapTrap " << name
			<< " take damage " << amount
			<< " points of damage!"
			<< RST << std::endl;
	if ((this->hitPoints - amount) > 0)
		this->hitPoints -= amount;
	else
		this->hitPoints = 0;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << GB << W << "ClapTrap " << name
				<< " has no hit points!"
				<< RST << std::endl;
	}
	else if (this->energyPoints == 0)
	{
		std::cout << BB << W << "ClapTrap " << name
				<< " has no energy points!"
				<< RST << std::endl;
	}
	else
	{
		std::cout << WB	<< G << "ClapTrap " << name
				<< " be repaired " << hitPoints
				<< " points of " << amount
				<< RST << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
}
