#include "Intern.hpp"

Intern::Intern()
{
	std::cout << G	<< "Intern default constructor called"
			<< RST << std::endl;
}

Intern::Intern(const Intern& copy)
{
	std::cout << B	<< "Intern copy constructor called"
			<< RST << std::endl;
	*this = copy;
}

Intern& Intern::operator=(const Intern& copy)
{
	std::cout << Y	<< "Intern copy assignment operator called"
			<< RST << std::endl;
	(void)copy;
	return *this;
}

Intern::~Intern()
{
	std::cout << R	<< "Intern destructor called"
			<< RST << std::endl;
}

AForm* Intern::createShrubberyCreationForm(const std::string& target) const
{
	return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomyRequestForm(const std::string& target) const
{
	return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidentialPardonForm(const std::string& target) const
{
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) const
{
	std::string formNames[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	const int formCount = sizeof(formNames) / sizeof(formNames[0]);

	AForm* (Intern::*formCreators[formCount])(const std::string&) const =
	{
		&Intern::createShrubberyCreationForm,
		&Intern::createRobotomyRequestForm,
		&Intern::createPresidentialPardonForm
	};

	for (int i = 0; i < formCount; i++)
	{
		if (name == formNames[i])
		{
			std::cout << GB	<< "Intern creates " << name << RST << std::endl;
			return (this->*formCreators[i])(target);
		}
	}

	std::cout << RB	<< "Intern cannot create " << name << " because it is an unknown form type." << RST << std::endl;
	return NULL;
}
