#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap	a("Bob");
	ScavTrap	b("Tim");
	FragTrap	c(a);
	FragTrap	d("Jhon");

	d = a;
	a.attack("Tim");
	b.attack("Bob");
	for (size_t i = 0; i < 100; i++)
		a.beRepaired(5);
	b.takeDamage(101);
	b.beRepaired(10);

	b.guardGate();
	c.highFiveGuys();
	return 0;
}