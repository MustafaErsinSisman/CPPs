# include "Bureaucrat.hpp"
# include "Form.hpp"

void line()
{
	std::cout << W << "\n----------------------------------\n" << RST << std::endl;
}
int main()
{
	Bureaucrat boss("Mershim", 1);
	Bureaucrat intern("Intern", 150);

	Form easyForm("Form A", 150, 150);
	Form hardForm("Form B", 1, 1);

	line();

	std::cout << easyForm;
	intern.signForm(easyForm);
	std::cout << easyForm;
	
	line();

	intern.signForm(hardForm);
	boss.signForm(hardForm);
	
	line();

	try
	{
		Form toHighSingGradeForm("Form X", 0, 50);
	}
	catch (const std::exception& e)
	{
		std::cerr << e;
	}
	
	line();

	try
	{
		Form toLowExecGradeForm("Form Y", 150, 200);
	}
	catch (const std::exception& e)
	{
		std::cerr << e;
	}
	
	line();

	return 0;
}