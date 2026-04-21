#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat")
{
	std::cout << G	<< "Bureaucrat default constructor called"
			<< RST << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name) : name(name)
{
	std::cout << G	<< "Bureaucrat parameterized constructor called"
			<< RST << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << B	<< "Bureaucrat copy constructor called"
			<< RST << std::endl;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	std::cout << Y	<< "Bureaucrat copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		this->name = copy.name; //TODO const kurallarına bak
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << R	<< "Bureaucrat destructor called"
			<< RST << std::endl;
}

const std::string Bureaucrat::getName() { return name; }

int Bureaucrat::getGrade() { return grade; }
