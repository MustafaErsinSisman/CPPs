#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed") {}

Zombie::~Zombie()
{
	std::cout	<< G	<< name
			<< B	<< " is destroyed."
			<< W	<< std::endl;
}

void	Zombie::setName( const std::string& name ) {this->name = name;}

void	Zombie::announce( void )
{
	std::cout	<< G	<< name
			<< R	<< ": BraiiiiiiinnnzzzZ..."
			<< W	<< std::endl;
}
