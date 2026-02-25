#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	out << G	<< "Dog default constructor called"
			<< RST << end;
	brain = new Brain();
}

Dog::Dog(const str& type) : AAnimal(type)
{
	out << G	<< "Dog parameterized constructor called"
			<< RST << end;
	brain = new Brain();
}

Dog::Dog(const Dog& copy) : AAnimal(copy)
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
		AAnimal::operator=(copy);
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

Brain* Dog::getBrain() const
{
	out << C	<< "Dog getBrain called"
			<< RST << end;
	return this->brain;
}

void	Dog::makeSound() const
{
	out << CB << "Woof woof!" << RST << end;
}
