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
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	std::cout << Y	<< "WrongCat copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << R	<< "WrongCat destructor called"
			<< RST << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << M << "Miyav miyav!" << RST << std::endl;
}
