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

	std::ifstream file_in(av[1]);

	if (!file_in.is_open())
	{
		std::cout << R << "File not opened." << W << std::endl;
		return 1;
	}

	std::string out_file_name = std::string(av[1]) + ".replace";
	std::ofstream file_out(out_file_name.c_str());

	if (!file_out.is_open())
	{
		std::cout << R << "Output file not opened." << W << std::endl;
		return 1;
	}

	std::string line;
	std::string change = av[2];
	std::string replace = av[3];

	while (std::getline(file_in, line))
	{
		size_t i = 0;
		while (i < line.size())
		{
			if (i + change.size() <= line.size() &&
				line.substr(i, change.size()) == change)
			{
				file_out << replace;
				i += change.size();
			}
			else
			{
				file_out << line[i];
				i++;
			}
		}
		file_out << '\n';
	}
	file_in.close();
	file_out.close();
	return 0;
}
