#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << G	<< "FragTrap "
			<< name
			<< " default constructor called"
			<< RST << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << B	<< "FragTrap "
			<< name
			<< " copy constructor called"
			<< RST << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	std::cout << Y	<< "FragTrap copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		ClapTrap::operator=(copy);
	std::cout << Y	<< "FragTrap " << name
			<< " copy assignment operator was executed"
			<< RST << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << R	<< "FragTrap "
			<< name
			<< " destructor called"
			<< RST << std::endl;
}

void FragTrap::highFiveGuys()
{
	std::cout << CB	<< W << "FragTrap " << name
			<< " is requests a high five!"
			<< RST << std::endl;
}
