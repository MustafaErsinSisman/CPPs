#include <iostream>

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define RESET   "\033[0m"

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << GREEN << "brain adress: " << YELLOW << &brain << std::endl;
	std::cout << GREEN << "stringPTR adress: " << YELLOW << stringPTR << std::endl;
	std::cout << GREEN << "stringREF adress: " << YELLOW << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << "brain value: " << YELLOW << brain << std::endl;
	std::cout << GREEN << "stringPTR value: " << YELLOW << *stringPTR << std::endl;
	std::cout << GREEN << "stringREF value: " << YELLOW << stringREF << RESET << std::endl;
	return 0;
}
