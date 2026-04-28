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
	ShrubberyCreationForm shrubbery("Garden");
	RobotomyRequestForm robotomy("Mershim");
	PresidentialPardonForm presidential("Mershim");

	AForm forms[3] = {shrubbery, robotomy, presidential};

	line();
	for (size_t i = 0; i < 3; i++)
	{
		std::cout << forms[i];
	}
	
	line();
	shrubbery.drawTree();

	line();
	return 0;
}