#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("AForm") , isSigned(false), signGrade(150), execGrade(150)
{
	std::cout << G	<< "AForm default constructor called"
			<< RST << std::endl;
}

AForm::AForm(const std::string& name, int signGrade, int execGrade) : name(name),
									isSigned(false),
									signGrade(signGrade),
									execGrade(execGrade)
{
	std::cout << G	<< "AForm parameterized constructor called"
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

AForm::AForm(const AForm& copy) : name(copy.name),
					isSigned(copy.isSigned),
					signGrade(copy.signGrade),
					execGrade(copy.execGrade)
{
	std::cout << B	<< "AForm copy constructor called"
			<< RST << std::endl;
}

AForm& AForm::operator=(const AForm& copy)
{
	std::cout << Y	<< "AForm copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		this->isSigned = copy.isSigned;
	return *this;
}

AForm::~AForm()
{
	std::cout << R	<< "AForm destructor called"
			<< RST << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Bureaucrat grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade is too low!";
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed!";
}

const std::string& AForm::getName() const
{
	return name;
}

bool AForm::getIsSigned() const
{
	return isSigned;
}

int AForm::getSignGrade() const
{
	return signGrade;
}

int AForm::getExecGrade() const
{
	return execGrade;
}

void AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > signGrade)
		throw GradeTooLowException();
	else
		isSigned = true;
}

void AForm::execute(const Bureaucrat& executor) const
{
	if (!isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > execGrade)
		throw GradeTooLowException();
	executeFunction();
}

std::ostream& operator<<(std::ostream& out, const AForm& f)
{
	out << YB <<f.getName() << ", is signed: " << std::boolalpha << f.getIsSigned() << ", sign grade: "
		<< f.getSignGrade() << ", exec grade: " << f.getExecGrade() << RST << std::endl;
	return out;
}
