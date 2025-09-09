#include "Zombie.hpp"

int	main( void )
{
	Zombie*	horde = zombieHorde(5, "Yusuf");

	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;
	horde = NULL;
	return 0;
}
