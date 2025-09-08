#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define RESET   "\033[0m"

class HumanB
{
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon();
		void	setWeapon(Weapon& newWeapon);
	private:
		std::string name;
		Weapon* weapon;
};

#endif