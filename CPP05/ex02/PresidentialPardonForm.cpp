# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << G	<< "Presidential Pardon Form default constructor called"
			<< RST << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& name, int signGrade, int execGrade) : AForm(name, signGrade, execGrade)
{
	std::cout << G	<< "Presidential Pardon Form parameterized constructor called"
			<< RST << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy)
{
	std::cout << G	<< "Presidential Pardon Form copy constructor called"
			<< RST << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	std::cout << Y	<< "Presidential Pardon Form copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		AForm::operator=(copy);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << R	<< "Presidential Pardon Form destructor called"
			<< RST << std::endl;
}

std::ostream& operator<<(std::ostream& out, const PresidentialPardonForm& p)
{
	out << YB <<p.getName() << ", is signed: " << std::boolalpha << p.getIsSigned() << ", sign grade: "
		<< p.getSignGrade() << ", exec grade: " << p.getExecGrade() << RST << std::endl;
	return out;
}
