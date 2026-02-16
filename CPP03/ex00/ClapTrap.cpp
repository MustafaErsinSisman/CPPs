#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout	<< G << "ClapTrap " << name << " default constructor was executed"
			<< RST << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << B	<< "ClapTrap " << name
			<< " copy constructor was executed"
			<< RST << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
	std::cout << Y	<< "ClapTrap " << name
			<< " copy assignment operator was executed"
			<< RST << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << R	<< "ClapTrap " << name
			<< " destructor was executed"
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
	if (this->hitPoints == 0)
	{
		std::cout << GB << W << "ClapTrap " << name
				<< " has no hit points!"
				<< RST << std::endl;
	}
	else
	{
		if (this->hitPoints > amount)
			this->hitPoints -= amount;
		else
			this->hitPoints = 0;
		std::cout << RB	<< W << "ClapTrap " << name
				<< " take damage " << amount
				<< " points of damage!"
				<< RST << std::endl;
	}
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
