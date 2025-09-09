#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed") {}

void	Zombie::setName( std::string name ) {this->name = name;}

Zombie::~Zombie()
{
	std::cout	<< G	<< name
			<< B	<< " is destroyed."
			<< W	<< std::endl;
}

void	Zombie::announce( void )
{
	std::cout	<< G	<< name
			<< R	<< ": BraiiiiiiinnnzzzZ..."
			<< W	<< std::endl;
}
