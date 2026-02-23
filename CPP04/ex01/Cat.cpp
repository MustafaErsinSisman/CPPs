#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	out << G	<< "Cat default constructor called"
			<< RST << end;
	brain = new Brain();
}

Cat::Cat(const str& type) : Animal(type)
{
	out << G	<< "Cat parameterized constructor called"
			<< RST << end;
	brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	out << B	<< "Cat copy constructor called"
			<< RST << end;
	brain = new Brain(*copy.brain);
}

Cat& Cat::operator=(const Cat& copy)
{
	out << Y	<< "Cat copy assignment operator called"
			<< RST << end;
	if (this != &copy)
	{
		Animal::operator=(copy);
		*this->brain = *copy.brain;
	}
	return *this;
}

Cat::~Cat()
{
	out << R	<< "Cat destructor called"
			<< RST << end;
	delete brain;
}

void	Cat::makeSound() const
{
	out << M << "Meow meow!" << RST << end;
}
