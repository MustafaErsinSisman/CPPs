#ifndef SHURBBERYCREATIONFORM_HPP
# define SHURBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& name, int signGrade, int execGrade);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();

	private:
		
};

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& s);

#endif