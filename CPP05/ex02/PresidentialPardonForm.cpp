# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("Target")
{
	std::cout << G	<< "Presidential Pardon Form default constructor called"
			<< RST << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << G	<< "Presidential Pardon Form parameterized constructor called"
			<< RST << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy), target(copy.target)
{
	std::cout << G	<< "Presidential Pardon Form copy constructor called"
			<< RST << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	std::cout << Y	<< "Presidential Pardon Form copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
	{
		AForm::operator=(copy);
		target = copy.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << R	<< "Presidential Pardon Form destructor called"
			<< RST << std::endl;
}

void PresidentialPardonForm::pardon() const
{
	std::cout << YB << target << " has been pardoned by Zaphod Beeblebrox." << RST << std::endl;
}

void PresidentialPardonForm::executeFunction() const
{
    pardon();
}
