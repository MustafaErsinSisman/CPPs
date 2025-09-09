#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : name(name) {}

void	Zombie::announce( void )
{
	std::cout	<< G	<< name
			<< R	<< ": BraiiiiiiinnnzzzZ..."
			<< W	<< std::endl;
}

Zombie::~Zombie()
{
	std::cout	<< G	<< name
			<< B	<< " is destroyed."
			<< W	<< std::endl;
}