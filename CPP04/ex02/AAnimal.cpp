#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << G	<< "AAnimal default constructor called"
			<< RST << std::endl;
}

AAnimal::AAnimal(const std::string& type) : type(type)
{
	std::cout << G	<< "AAnimal parameterized constructor called"
			<< RST << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy)
{
	std::cout << B	<< "AAnimal copy constructor called"
			<< RST << std::endl;
	*this = copy;
}

AAnimal&	AAnimal::operator=(const AAnimal& copy)
{
	std::cout << Y	<< "AAnimal copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << R	<< "AAnimal destructor called"
			<< RST << std::endl;
}

std::string	AAnimal::getType() const
{
	std::cout << C	<< "getType member function called"
			<< RST << std::endl;
	return type;
}


void	AAnimal::makeSound() const
{
	std::cout << RB	<< "There are no Aanimals that can make noise."
			<< RST << std::endl;
}