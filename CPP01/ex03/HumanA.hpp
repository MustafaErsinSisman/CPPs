#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define RESET   "\033[0m"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack();
	private:
		std::string name;
		Weapon& weapon;
};

#endif