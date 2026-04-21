#include "Brain.hpp"

Brain::Brain()
{
	std::cout << G	<< "Brain default constructor called"
			<< RST << std::endl;
	ideas = new std::string[100];
}

Brain::Brain(const std::string* newIdeas)
{
	std::cout << G	<< "Brain parameterized constructor called"
			<< RST << std::endl;
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = newIdeas[i];
}

Brain::Brain(const Brain& copy)
{
	std::cout << B	<< "Brain copy constructor called"
			<< RST << std::endl;
	ideas = new std::string[100];
	*this = copy;
}

Brain&	Brain::operator=(const Brain& copy)
{
	std::cout << Y	<< "Brain copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << R	<< "Brain destructor called"
			<< RST << std::endl;
	delete[] ideas;
}

void	Brain::outIdeas() const
{
	std::cout << C << "Brain outIdeas called"
			<< RST << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		if(ideas[i].empty())
			break;
		else
			std::cout << YB << "Idea " << i + 1 << ": " << ideas[i] << RST << std::endl;
	}
}

void	Brain::setIdea(int index, const std::string& idea)
{
	std::cout << M << "Brain setIdea called"
			<< RST << std::endl;
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}

void	Brain::setAllIdeas(const std::string& idea)
{
	std::cout << M << "Brain setAllIdeas called"
			<< RST << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
}