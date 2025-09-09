#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout	<< G << "[ DEBUG ]" << std::endl
			<< W << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout	<< B << "[ INFO ]" << std::endl
			<< W << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout	<< Y << "[ WARINING ]" << std::endl
			<< W << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout	<< R << "[ ERROR ] "<< std::endl
			<< W << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*funcitons[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int		i = 0;
	
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			break;
	}

	switch (i)
	{
		case 0:
			(this->*funcitons[0])();
			std::cout << std::endl;
		case 1:
			(this->*funcitons[1])();
			std::cout << std::endl;
		case 2:
			(this->*funcitons[2])();
			std::cout << std::endl;
		case 3:
			(this->*funcitons[3])();
			std::cout << std::endl;
			break;
		default:
			std::cout << R << "There is no such option!" << W << std::endl;
			break;
	}
}