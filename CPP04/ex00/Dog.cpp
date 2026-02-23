#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << G	<< "Dog default constructor called"
			<< RST << std::endl;
}

Dog::Dog(const std::string& type) : Animal(type)
{
	std::cout << G	<< "Dog parameterized constructor called"
			<< RST << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << B	<< "Dog copy constructor called"
			<< RST << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << Y	<< "Dog copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		Animal::operator=(copy);
	return *this;
}

Dog::~Dog()
{
	std::cout << R	<< "Dog destructor called"
			<< RST << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << M << "Woof woof!" << RST << std::endl;
}
