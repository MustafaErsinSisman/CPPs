#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << G	<< "WrongCat default constructor called"
			<< RST << std::endl;
}

WrongCat::WrongCat(const std::string& type) : WrongAnimal(type)
{
	std::cout << G	<< "WrongCat parameterized constructor called"
			<< RST << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << B	<< "WrongCat copy constructor called"
			<< RST << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	std::cout << Y	<< "WrongCat copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		WrongAnimal::operator=(copy);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << R	<< "WrongCat destructor called"
			<< RST << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << R << "WRONG!!! " << M << "Meow meow!" << RST << std::endl;
}
