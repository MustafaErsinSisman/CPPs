#include "Brain.hpp"

Brain::Brain()
{
	out << G	<< "Brain default constructor called"
			<< RST << end;
	ideas = new str[100];
}

Brain::Brain(const str* newIdeas)
{
	out << G	<< "Brain parameterized constructor called"
			<< RST << end;
	ideas = new str[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = newIdeas[i];
}

Brain::Brain(const Brain& copy)
{
	out << B	<< "Brain copy constructor called"
			<< RST << end;
	ideas = new str[100];
	*this = copy;
}

Brain&	Brain::operator=(const Brain& copy)
{
	out << Y	<< "Brain copy assignment operator called"
			<< RST << end;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	out << R	<< "Brain destructor called"
			<< RST << end;
	delete[] ideas;
}

void	Brain::outIdeas() const
{
	out << C << "Brain outIdeas called"
			<< RST << end;
	for (size_t i = 0; i < 100; i++)
	{
		if(ideas[i].empty())
			break;
		else
			out << YB << "Idea " << i + 1 << ": " << ideas[i] << RST << end;
	}
}

void	Brain::setIdea(int index, const str& idea)
{
	out << M << "Brain setIdea called"
			<< RST << end;
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}

void	Brain::setAllIdeas(const str& idea)
{
	out << M << "Brain setAllIdeas called"
			<< RST << end;
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
}