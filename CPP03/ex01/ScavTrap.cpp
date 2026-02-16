#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << G	<< "ScavTrap " << name
			<< " default constructor was executed"
			<< RST << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << B	<< "ScavTrap " << name
			<< " copy constructor was executed"
			<< RST << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	if (this != &copy)
		ClapTrap::operator=(copy);
	std::cout << Y	<< "ScavTrap " << name
			<< " copy assignment operator was executed"
			<< RST << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << R	<< "ScavTrap " << name
			<< " destructor was executed"
			<< RST << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0)
	{
		std::cout << GB << W << "ScavTrap " << name
				<< " has no hit points!"
				<< RST << std::endl;
	}
	else if (this->energyPoints == 0)
	{
		std::cout << BB << W << "ScavTrap " << name
				<< " has no energy points!"
				<< RST << std::endl;
	}
	else
	{
		std::cout << WB	<< R << "ScavTrap " << name
				<< " attacks " << target
				<< ", causing " << attackDamage
				<< " points of damage!"
				<< RST << std::endl;
		this->energyPoints--;
	}
}


void ScavTrap::guardGate()
{
	std::cout << MB	<< W << "ScavTrap " << name
			<< " is guard gate."
			<< RST << std::endl;
}
