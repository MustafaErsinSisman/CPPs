#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapZombie = newZombie("Ersin");
	
	heapZombie->announce();
	delete heapZombie;
	heapZombie = NULL;

	heapZombie = newZombie("Deneme");
	heapZombie->announce();
	delete heapZombie;
	heapZombie = NULL;
	
	randomChump("Yusuf");
	
	Zombie stackZombie("Mustafa");
	
	stackZombie.announce();
	return 0;
}
