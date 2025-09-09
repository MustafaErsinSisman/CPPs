#include <iostream>
#include <fstream>

#define R	"\033[1;31m"
#define G	"\033[1;32m"
#define Y	"\033[1;33m"
#define B	"\033[1;34m"
#define W	"\033[0m"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << R << "3 parameters please!" << W << std::endl;
		return 1;
	}

	std::ifstream in_file(av[1]);

	if (!in_file.is_open())
	{
		std::cout << R << "File: " << av[1] << " is not opened." << W << std::endl;
		return 1;
	}

	std::string out_file_name = std::string(av[1]) + ".replace";
	std::ofstream out_file(out_file_name.c_str());

	if (!out_file.is_open())
	{
		std::cout << R << av[1] << "File: " <<".replace is not opened." << W << std::endl;
		return 1;
	}

	std::string line;
	std::string change = av[2];
	std::string replace = av[3];

	while (std::getline(in_file, line))
	{
		size_t i = 0;
		while (i < line.size())
		{
			if (i + change.size() <= line.size() &&
				line.substr(i, change.size()) == change)
			{
				out_file << replace;
				i += change.size();
			}
			else
			{
				out_file << line[i];
				i++;
			}
		}
		out_file << '\n';
	}
	in_file.close();
	out_file.close();
	return 0;
}
