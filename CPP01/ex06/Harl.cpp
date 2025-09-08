#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << GREEN << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << BLUE << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "WARINING: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "ERROR: This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*funcitons[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			for (int j = 0; j < i + 1; j++)
				(this->*funcitons[j])();
			return;
		}
	}
}