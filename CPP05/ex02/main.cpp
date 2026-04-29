# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

void line()
{
	std::cout << W << "\n----------------------------------\n" << RST << std::endl;
}
int main()
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	line();

	Bureaucrat boss("Mershim", 1);
	Bureaucrat manager("Manager", 40);
	Bureaucrat intern("Intern", 140);

	line();

	ShrubberyCreationForm shrubberry("Garden");
	RobotomyRequestForm robot("My arm");
	PresidentialPardonForm pardon("Fake Criminal");

	line();

	boss.executeForm(shrubberry); 
	intern.signForm(shrubberry);
	intern.executeForm(shrubberry);
	boss.executeForm(shrubberry);

	line();

	manager.signForm(robot);
	manager.executeForm(robot);
	boss.executeForm(robot);
	boss.executeForm(robot);

	line();

	manager.signForm(pardon);
	boss.signForm(pardon);
	manager.executeForm(pardon);
	boss.executeForm(pardon);

	line();

	return 0;
}