#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed") {}

Zombie::Zombie( const std::string& name ) : name(name) {}

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
