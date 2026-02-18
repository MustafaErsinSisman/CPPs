#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& copy);
		DiamondTrap&	operator=(const DiamondTrap& copy);
		~DiamondTrap();

		void whoAmI();
};

#endif