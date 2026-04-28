# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << G	<< "Robotomy Request Form default constructor called"
			<< RST << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& name, int signGrade, int execGrade) : AForm(name, signGrade, execGrade)
{
	std::cout << G	<< "Robotomy Request Form parameterized constructor called"
			<< RST << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy)
{
	std::cout << G	<< "Robotomy Request Form copy constructor called"
			<< RST << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	std::cout << Y	<< "Robotomy Request Form copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		AForm::operator=(copy);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << R	<< "Robotomy Request Form destructor called"
			<< RST << std::endl;
}

std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm& r)
{
	out << YB <<r.getName() << ", is signed: " << std::boolalpha << r.getIsSigned() << ", sign grade: "
		<< r.getSignGrade() << ", exec grade: " << r.getExecGrade() << RST << std::endl;
	return out;
}
