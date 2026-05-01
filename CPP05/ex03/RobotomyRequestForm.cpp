# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Target")
{
	std::cout << G	<< "Robotomy Request Form default constructor called"
			<< RST << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << G	<< "Robotomy Request Form parameterized constructor called"
			<< RST << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy), target(copy.target)
{
	std::cout << G	<< "Robotomy Request Form copy constructor called"
			<< RST << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	std::cout << Y	<< "Robotomy Request Form copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
	{
		AForm::operator=(copy);
		target = copy.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << R	<< "Robotomy Request Form destructor called"
			<< RST << std::endl;
}

void RobotomyRequestForm::makeRobotomy() const
{
	std::cout << YB << "Bzzzz... Vrrrrrr... (some drilling noise)" << RST << std::endl;
	if (std::rand() % 2)
		std::cout << GB << target << " has been robotomized successfully." << RST << std::endl;
	else
		std::cout << RB << "Failed to robotomize " << target << "." << RST << std::endl;
}

void RobotomyRequestForm::executeFunction() const
{
    makeRobotomy();
}
