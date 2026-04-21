#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << G	<< "Dog default constructor called"
			<< RST << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << B	<< "Dog copy constructor called"
			<< RST << std::endl;
	brain = new Brain(*copy.brain);
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << Y	<< "Dog copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		*this->brain = *copy.brain;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << R	<< "Dog destructor called"
			<< RST << std::endl;
	delete brain;
}

Brain* Dog::getBrain() const
{
	std::cout << C	<< "Dog getBrain called"
			<< RST << std::endl;
	return this->brain;
}

void	Dog::makeSound() const
{
	std::cout << CB << "Woof woof!" << RST << std::endl;
}
