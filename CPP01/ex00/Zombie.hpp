#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define R	"\033[1;31m"
# define G	"\033[1;32m"
# define Y	"\033[1;33m"
# define B	"\033[1;34m"
# define W	"\033[0m"

class Zombie
{
	public:
		Zombie();
		Zombie( const std::string& name );
		~Zombie();

		void	announce( void );
	private:
		std::string	name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif