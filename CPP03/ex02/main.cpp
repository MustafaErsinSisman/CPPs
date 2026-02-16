#include "FragTrap.hpp"

int main(void)
{
	FragTrap	a("Bob");
	FragTrap	b("Tim");
	FragTrap	c(a);

	a.attack("Tim");
	for (size_t i = 0; i < 100; i++)
		a.beRepaired(5);
	b.takeDamage(101);
	b.beRepaired(10);

	c.highFiveGuys();
	return 0;
}