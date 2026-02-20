#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << G	<< "WrongAnimal default constructor called"
			<< RST << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type)
{
	std::cout << G	<< "WrongAnimal parameterized constructor called"
			<< RST << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << B	<< "WrongAnimal copy constructor called"
			<< RST << std::endl;
	*this = copy;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << Y	<< "WrongAnimal copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << R	<< "WrongAnimal destructor called"
			<< RST << std::endl;
}

std::string	WrongAnimal::getType() const
{
	std::cout	<< C << "getType member function called"
			<< RST << std::endl;
	return type;
}

void WrongAnimal::setType(const std::string& type)
{
	std::cout	<< C << "setType member function called"
			<< RST << std::endl;
	this->type = type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << D << "There are no wronganimals that can make noise." << RST << std::endl;
}