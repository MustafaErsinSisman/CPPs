#include "Zombie.hpp"

int	main( void )
{
	Zombie	*heapZombie = new Zombie("Ersin");

	heapZombie->announce();
	delete heapZombie;
	heapZombie = NULL;

	heapZombie = newZombie("Ersin 2.0");
	heapZombie->announce();
	delete heapZombie;
	heapZombie = NULL;

	Zombie	stackZombie("Mustafa");
	Zombie	stackZombie2("Emre");
	
	stackZombie.announce();
	randomChump("Chump");
	stackZombie2.announce();
	return 0;
}
