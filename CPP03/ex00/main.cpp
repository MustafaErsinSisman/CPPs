#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	a("Bob");
	ClapTrap	b("Tim");
	ClapTrap	c(a);

	a.attack("Tim");
	for (size_t i = 0; i < 10; i++)
	{
		a.beRepaired(5);
	}
	b.takeDamage(10);
	b.beRepaired(10);
	return 0;
}