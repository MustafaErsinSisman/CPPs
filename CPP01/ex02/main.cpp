#include <iostream>

#define R	"\033[1;31m"
#define G	"\033[1;32m"
#define Y	"\033[1;33m"
#define B	"\033[1;34m"
#define W	"\033[0m"

int	main( void )
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	std::cout	<< G << "brain adress: "
			<< Y << &brain << std::endl
			<< G << "stringPTR adress: "
			<< Y << stringPTR << std::endl
			<< G << "stringREF adress: "
			<< Y << &stringREF << std::endl

			<< G << "\nbrain value: "
			<< Y << brain << std::endl
			<< G << "stringPTR value: "
			<< Y << *stringPTR << std::endl
			<< G << "stringREF value: "
			<< Y << stringREF << W << std::endl;
	return 0;
}
