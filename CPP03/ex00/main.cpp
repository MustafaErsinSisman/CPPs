#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("Bob");
	ClapTrap	b("Tim");
	ClapTrap	c (a);

	a.attack("Tim");
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.beRepaired(5);
	a.attack("Tim");
	
	b.takeDamage(10);
	b.beRepaired(10);
	return 0;
}