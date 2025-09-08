#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "3 parameters please!" << std::endl;
		return 1;
	}

	std::ifstream file_in(av[1]);
	if (!file_in.is_open())
	{
		std::cout << "File not opened." << std::endl;
		return 1;
	}

	std::string out_file_name = std::string(av[1]) + ".replace";
	std::ofstream file_out(out_file_name.c_str());
	if (!file_out.is_open())
	{
		std::cout << "Output file not opened." << std::endl;
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
