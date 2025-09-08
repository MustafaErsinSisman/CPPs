#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		const std::string& getType() const;
		void setType(std::string newType);
	private:
		std::string type;
};

#endif