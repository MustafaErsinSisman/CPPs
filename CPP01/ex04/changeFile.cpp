#include "sed.hpp"

void	change_file(char **av, std::ifstream& in_file,
			std::ofstream& out_file, std::string& line)
{
	std::string change = av[2];
	std::string replace = av[3];
	bool status = 0;

	do
	{
		size_t i = 0;
		while (i < line.size())
		{
			if (i + change.size() <= line.size() &&
				line.substr(i, change.size()) == change)
			{
				out_file << replace;
				i += change.size();
				status = 1;
			}
			else
			{
				out_file << line[i];
				i++;
			}
		}
		out_file << '\n';
	} while (std::getline(in_file, line));
	if (!status)
		std::cout << R << "File: " << "There is no " << av[2]
				<< " in " << av[1] << " file. So " << av[1]
				<< ".replace has same content as the "
				<< av[1] << " file." << W << std::endl;
	in_file.close();
	out_file.close();
}
