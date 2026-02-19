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
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << Y	<< "Cat copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << R	<< "Cat destructor called"
			<< RST << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << M << "Miyav miyav!" << RST << std::endl;
}
