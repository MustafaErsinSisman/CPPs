#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapZombie = newZombie("Ersin");
	
	heapZombie->announce();
	delete heapZombie;
	heapZombie = NULL;
	
	Zombie stackZombie("Mustafa");
	

	stackZombie.announce();
	randomChump("Yusuf");

	heapZombie = newZombie("Deneme");
	heapZombie->announce();
	delete heapZombie;
	heapZombie = NULL;
	return 0;
}
