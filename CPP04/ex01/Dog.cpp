#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	out << G	<< "Dog default constructor called"
			<< RST << end;
	brain = new Brain();
}

Dog::Dog(const str& type) : Animal(type)
{
	out << G	<< "Dog parameterized constructor called"
			<< RST << end;
	brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	out << B	<< "Dog copy constructor called"
			<< RST << end;
	brain = new Brain(*copy.brain);
}

Dog& Dog::operator=(const Dog& copy)
{
	out << Y	<< "Dog copy assignment operator called"
			<< RST << end;
	if (this != &copy)
	{
		Animal::operator=(copy);
		*this->brain = *copy.brain;
	}
	return *this;
}

Dog::~Dog()
{
	out << R	<< "Dog destructor called"
			<< RST << end;
	delete brain;
}

void	Dog::makeSound() const
{
	out << M << "Woof woof!" << RST << end;
}
