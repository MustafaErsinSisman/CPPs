#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	a("Bob");
	ScavTrap	b("Tim");
	ScavTrap	c(a);

	a.attack("Tim");
	for (size_t i = 0; i < 50; i++)
		a.beRepaired(5);
	b.takeDamage(101);
	b.beRepaired(10);

	c.guardGate();
	return 0;
}