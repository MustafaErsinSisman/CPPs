#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Form") , isSigned(false), signGrade(150), execGrade(150)
{
	std::cout << G	<< "Form default constructor called"
			<< RST << std::endl;
}

Form::Form(const std::string& name, int signGrade, int execGrade) : name(name),
									isSigned(false),
									signGrade(signGrade),
									execGrade(execGrade)
{
	std::cout << G	<< "Form parameterized constructor called"
			<< RST << std::endl;
	if (signGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150)
		throw GradeTooLowException();
	if (execGrade < 1)
		throw GradeTooHighException();
	else if (execGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& copy) : name(copy.name),
				isSigned(copy.isSigned),
				signGrade(copy.signGrade),
				execGrade(copy.execGrade)
{
	std::cout << B	<< "Form copy constructor called"
			<< RST << std::endl;
}

Form& Form::operator=(const Form& copy)
{
	std::cout << Y	<< "Form copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		this->isSigned = copy.isSigned;
	return *this;
}

Form::~Form()
{
	std::cout << R	<< "Form destructor called"
			<< RST << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Bureaucrat grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade is too low!";
}

const std::string& Form::getName() const
{
	return name;
}

bool Form::getIsSigned() const
{
	return isSigned;
}

int Form::getSignGrade() const
{
	return signGrade;
}

int Form::getExecGrade() const
{
	return execGrade;
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > signGrade)
		throw GradeTooLowException();
	else
		isSigned = true;
}

std::ostream& operator<<(std::ostream& out, const Form& f)
{
	out << YB <<f.getName() << ", is signed: " << std::boolalpha << f.getIsSigned() << ", sign grade: "
		<< f.getSignGrade() << ", exec grade: " << f.getExecGrade() << RST << std::endl;
	return out;
}
