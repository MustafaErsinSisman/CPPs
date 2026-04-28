# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) , target("Target")
{
	std::cout << G	<< "Shrubbery Creation Form default constructor called"
			<< RST << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << G	<< "Shrubbery Creation Form parameterized constructor called"
			<< RST << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), target(copy.target)
{
	std::cout << G	<< "Shrubbery Creation Form copy constructor called"
			<< RST << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	std::cout << Y	<< "Shrubbery Creation Form copy assignment operator called"
			<< RST << std::endl;
	if (this != &copy)
		AForm::operator=(copy);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << R	<< "Shrubbery Creation Form destructor called"
			<< RST << std::endl;
}

void ShrubberyCreationForm::drawTree() const
{
	try
	{
		std::string filename = target + "_shrubbery";
		std::ofstream out(filename.c_str());
		out << "       _-_" << std::endl;
		out << "    /~~   ~~\\" << std::endl;
		out << " /~~         ~~\\" << std::endl;
		out << "{               }" << std::endl;
		out << " \\  _-     -_  /" << std::endl;
		out << "   ~  \\\\ //  ~" << std::endl;
		out << "_- -   | | _- _" << std::endl;
		out << "  _ -  | |   -_" << std::endl;
		out << "      // \\\\" << std::endl;
		out.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
