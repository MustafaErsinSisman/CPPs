#include "sed.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << R << "3 parameters please!" << W << std::endl;
		return 1;
	}

	if (std::string(av[2]).empty() || std::string(av[3]).empty())
	{
		std::cout << R << "Empty parameters!" << W << std::endl;
		return 1;
	}

	std::ifstream in_file(av[1]);

	if (!in_file.is_open())
	{
		std::cout << R << "File: " << av[1] << " is not opened." << W << std::endl;
		return 1;
	}

	std::string line;

	if (!std::getline(in_file, line))
	{
		std::cout << R << "File: " << av[1] << " is empty!" << W << std::endl;
		return 1;
	}

	std::string out_file_name = std::string(av[1]) + ".replace";
	std::ofstream out_file(out_file_name.c_str());

	if (!out_file.is_open())
	{
		std::cout << R << av[1] << "File: " <<".replace is not opened." << W << std::endl;
		return 1;
	}
	change_file(av, in_file, out_file, line);
	return 0;
}
