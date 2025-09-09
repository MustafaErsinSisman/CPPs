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
	
	stackZombie.announce();

	Zombie	stackZombie2("Emre");
	
	stackZombie2.announce();

	randomChump("Chump");
	return 0;
}
