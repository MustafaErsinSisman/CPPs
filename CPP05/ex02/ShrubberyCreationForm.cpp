# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << G	<< "Shrubbery Creation Form default constructor called"
			<< RST << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name, int signGrade, int execGrade) : AForm(name, signGrade, execGrade)
{
	std::cout << G	<< "Shrubbery Creation Form parameterized constructor called"
			<< RST << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy)
{
	std::cout << G	<< "Shrubbery Creation Form copy constructor called"
			<< RST << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	std::cout << Y	<< "Shrubbery Creation Form copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		AForm::operator=(copy);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << R	<< "Shrubbery Creation Form destructor called"
			<< RST << std::endl;
}

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& s)
{
	out << YB <<s.getName() << ", is signed: " << std::boolalpha << s.getIsSigned() << ", sign grade: "
		<< s.getSignGrade() << ", exec grade: " << s.getExecGrade() << RST << std::endl;
	return out;
}
