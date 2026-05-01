# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "Intern.hpp"

void line()
{
	std::cout << W << "\n----------------------------------\n" << RST << std::endl;
}
int main()
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	line();

	Bureaucrat boss("Mershim", 1);
	Intern intern;

	line();

	AForm* sf = intern.makeForm("shrubbery creation", "Garden");
	AForm* rf = intern.makeForm("robotomy request", "Arm");
	AForm* pf = intern.makeForm("presidential pardon", "Fake Criminal");

	line();

	std::cout << *sf << std::endl;
	std::cout << *rf << std::endl;
	std::cout << *pf << std::endl;

	line();

	boss.signForm(*sf);
	boss.signForm(*rf);
	boss.signForm(*pf);

	line();

	boss.executeForm(*sf);
	boss.executeForm(*rf);
	boss.executeForm(*pf);

	line();

	AForm* unknownForm = intern.makeForm("unknown form", "Target");

	if (unknownForm)
	{
		std::cout << "How can this be? The intern created an unknown form! Unbelievable" << std::endl;
		std::cout << *unknownForm << std::endl;
		boss.signForm(*unknownForm);
		boss.executeForm(*unknownForm);
		delete unknownForm;
	}

	line();

	delete sf;
	delete rf;
	delete pf;
	delete unknownForm;

	return 0;
}