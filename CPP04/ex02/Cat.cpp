#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	out << G	<< "Cat default constructor called"
			<< RST << end;
	brain = new Brain();
}

Cat::Cat(const str& type) : AAnimal(type)
{
	out << G	<< "Cat parameterized constructor called"
			<< RST << end;
	brain = new Brain();
}

Cat::Cat(const Cat& copy) : AAnimal(copy)
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
		AAnimal::operator=(copy);
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

Brain* Cat::getBrain() const
{
	out << C	<< "Cat getBrain called"
			<< RST << end;
	return this->brain;
}

void	Cat::makeSound() const
{
	out << MB << "Meow meow!" << RST << end;
}
