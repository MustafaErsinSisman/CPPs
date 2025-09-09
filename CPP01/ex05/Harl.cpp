#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << G << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << W << std::endl;
}

void	Harl::info( void )
{
	std::cout << B << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << W << std::endl;
}

void	Harl::warning( void )
{
	std::cout << Y << "WARINING: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << W << std::endl;
}

void	Harl::error( void )
{
	std::cout << R << "ERROR: This is unacceptable! I want to speak to the manager now." << W << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	// member funtions pointerlarına daha detaylı bak
	void		(Harl::*funcitons[])(void) = {&Harl::debug,
							&Harl::info,
							&Harl::warning,
							&Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*funcitons[i])();
			return;
		}
		if (i == 3)
			std::cout << R << "There is no such option!" << W << std::endl;
	}
}