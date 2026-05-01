#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "AForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const std::string& name, const std::string& target);
		Intern(const Intern& copy);
		Intern& operator=(const Intern& copy);
		~Intern();

		const std::string& getName() const;
		const std::string& getTarget() const;

		const AForm* makeForm(const std::string& name, const std::string& target) const;

	private:
		std::string name;
		std::string target;
};


#endif