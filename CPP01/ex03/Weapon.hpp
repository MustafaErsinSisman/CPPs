#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define R	"\033[1;31m"
# define G	"\033[1;32m"
# define Y	"\033[1;33m"
# define B	"\033[1;34m"
# define W	"\033[0m"

class Weapon
{
	public:
		Weapon();
		Weapon( const std::string& type );
		const std::string& getType() const;
		void setType( const std::string& newType );
	private:
		std::string	type;
};

#endif