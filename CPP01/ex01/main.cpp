#include "Zombie.hpp"

int	main( void )
{
	Zombie*	horde = zombieHorde(5, "Yusuf");

	delete[] horde;
	horde = NULL;
	return 0;
}
