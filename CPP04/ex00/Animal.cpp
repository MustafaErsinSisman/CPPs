#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << G	<< "Animal default constructor called"
			<< RST << std::endl;
}

Animal::Animal(const std::string& type) : type(type)
{
	std::cout << G	<< "Animal parameterized constructor called"
			<< RST << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << B	<< "Animal copy constructor called"
			<< RST << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
	std::cout << Y	<< "Animal copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << R	<< "Animal destructor called"
			<< RST << std::endl;
}
