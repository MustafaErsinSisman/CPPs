#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
	{
		std::cout << R << "1 parameter please!" << W << std::endl;
		return 1; 
	}
	harl.complain(av[1]);
	return 0;
}
