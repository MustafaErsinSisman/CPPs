#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>

#define R	"\033[1;31m"
#define G	"\033[1;32m"
#define Y	"\033[1;33m"
#define B	"\033[1;34m"
#define W	"\033[0m"

void	change_file(char **av, std::ifstream& in_file,
			std::ofstream& out_file, std::string& line);

#endif
