#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << G	<< "Cat default constructor called"
			<< RST << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& copy) : AAnimal(copy)
{
	std::cout << B	<< "Cat copy constructor called"
			<< RST << std::endl;
	brain = new Brain(*copy.brain);
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << Y	<< "Cat copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
	{
		AAnimal::operator=(copy);
		*this->brain = *copy.brain;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << R	<< "Cat destructor called"
			<< RST << std::endl;
	delete brain;
}

Brain* Cat::getBrain() const
{
	std::cout << C	<< "Cat getBrain called"
			<< RST << std::endl;
	return this->brain;
}

void	Cat::makeSound() const
{
	std::cout << MB << "Meow meow!" << RST << std::endl;
}
