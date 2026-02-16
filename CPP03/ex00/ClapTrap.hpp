#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define R	"\033[1;31m"
# define G	"\033[1;32m"
# define Y	"\033[1;33m"
# define B	"\033[1;34m"
# define M	"\033[1;35m"
# define C	"\033[1;36m"
# define W	"\033[0m"

class ClapTrap
{
	public:
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& copy);
		ClapTrap&	operator=(const ClapTrap& copy);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string	name;
		unsigned int	hitPoints = 10;
		unsigned int	energyPoints = 10;
		unsigned int	attackDamage = 0;
};

#endif