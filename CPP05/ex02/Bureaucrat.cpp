#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat") , grade(150)
{
	std::cout << G	<< "Bureaucrat default constructor called"
			<< RST << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade)
{
	std::cout << G	<< "Bureaucrat parameterized constructor called"
			<< RST << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name), grade(copy.grade)
{
	std::cout << B	<< "Bureaucrat copy constructor called"
			<< RST << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	std::cout << Y	<< "Bureaucrat copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		this->grade = copy.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << R	<< "Bureaucrat destructor called"
			<< RST << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

const std::string& Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}
	
void Bureaucrat::incrementGrade()
{
	if (grade <= 1)
		throw GradeTooHighException();
	else
		grade--;
}

void Bureaucrat::decrementGrade()
{
	if (grade >= 150)
		throw GradeTooLowException();
	else
		grade++;
}

void Bureaucrat::signForm(AForm& aform) const
{
	try
	{
		aform.beSigned(*this);
		std::cout << BB << name << " signed " << aform.getName() << "." << RST << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RB <<  name << " couldn't sign " << aform.getName() << " because " << e.what() << RST <<std::endl;
	}	
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
	out << GB << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << RST << std::endl;
	return out;
}

std::ostream& operator<<(std::ostream& err, const std::exception& e)
{
	err << RB << "Exception: " << e.what() << RST << std::endl;
	return err;
}
