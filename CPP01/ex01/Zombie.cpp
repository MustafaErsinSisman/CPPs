#include "Zombie.hpp"

void Zombie::setName(std::string name){this->name = name;}

void	Zombie::announce(void)
{
	std::cout << GREEN << name << RED << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}


Zombie::~Zombie()
{
	std::cout << GREEN << name << BLUE << " is destroyed." << RESET << std::endl;
}