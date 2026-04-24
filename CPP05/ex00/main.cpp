# include "Bureaucrat.hpp"

int main()
{
	Bureaucrat boss("Mershim", 1);
	Bureaucrat employee("Employee", 150);
	Bureaucrat copyBoss(boss);

	std::cout << boss;
	std::cout << employee;
	std::cout << copyBoss;

	try
	{
		boss.incrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << e;
	}

	boss.decrementGrade();
	std::cout << boss;
	boss.incrementGrade();
	
	try
	{
		employee.decrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << e;
	}

	employee.incrementGrade();
	std::cout << employee;
	employee.decrementGrade();

	employee = boss;
	std::cout << employee;

	try
	{
		Bureaucrat invalid("Invalid", -42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e;
	}
	
	try
	{
		Bureaucrat invalid("Invalid", 4242);
	}
	catch(const std::exception& e)
	{
		std::cerr << e;
	}

	return 0;
}
