#ifndef SHURBBERYCREATIONFORM_HPP
# define SHURBBERYCREATIONFORM_HPP

# include <fstream>

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();

		void drawTree() const;
	private:
		const std::string target;
};

#endif