#include "Zombie.hpp"

int	main( void )
{
	Zombie	*heapZombie = newZombie("Ersin");
	
	heapZombie->announce();
	delete heapZombie;
	heapZombie = NULL;

	heapZombie = newZombie("Ersin 2.0");
	heapZombie->announce();
	delete heapZombie;
	heapZombie = NULL;

	Zombie	stackZombie("Mustafa");
	
	stackZombie.announce();

	randomChump("Chump");
	return 0;
}
