#include "Intern.hpp"

Intern::Intern() : name("Intern") , target("Target")
{
	std::cout << G	<< "Intern default constructor called"
			<< RST << std::endl;
}

Intern::Intern(const std::string& name, const std::string& target) : name(name), target(target)
{
	std::cout << G	<< "Intern parameterized constructor called"
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
	if (this != &copy)
	{
		name = copy.name;
		target = copy.target;
	}
	return *this;
}

Intern::~Intern()
{
	std::cout << R	<< "Intern destructor called"
			<< RST << std::endl;
}

const std::string& Intern::getName() const
{
	return name;
}

const std::string& Intern::getTarget() const
{
	return target;
}

