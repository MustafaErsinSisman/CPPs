#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << G	<< "ScalarConverter default constructor called"
			<< RST << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	std::cout << B	<< "ScalarConverter copy constructor called"
			<< RST << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
	std::cout << Y	<< "ScalarConverter copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << R	<< "ScalarConverter destructor called"
			<< RST << std::endl;
}

// std::ostream& operator<<(std::ostream& out, const ScalarConverter& b)
// {
// 	out << GB << b.getName() << ", ScalarConverter grade " << b.getGrade() << "." << RST << std::endl;
// 	return out;
// }
