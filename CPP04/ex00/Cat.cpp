#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << G	<< "Cat default constructor called"
			<< RST << std::endl;
}

Cat::Cat(const std::string& type) : Animal(type)
{
	std::cout << G	<< "Cat parameterized constructor called"
			<< RST << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << B	<< "Cat copy constructor called"
			<< RST << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << Y	<< "Cat copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		Animal::operator=(copy);
	return *this;
}

Cat::~Cat()
{
	std::cout << R	<< "Cat destructor called"
			<< RST << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << M << "Meow meow!" << RST << std::endl;
}
