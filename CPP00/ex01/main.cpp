#include "Phonebook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	cmd;

	std::cout << "======= PHONE BOOK =======" << std::endl;    
	while (true)
	{
		std::cout << "\nOPTIONS      : ADD, SEARCH, EXIT" << std::endl;
		std::cout << "Enter option : ";
		if (!std::getline(std::cin, cmd))
		{
			std::cout << std::endl;
			break;
		}
		if (cmd == "ADD")
		{
			if (phonebook.addContact())
			{
				std::cout << std::endl;
				break;
			}
		}
		else if (cmd == "SEARCH")
		{
			if (phonebook.searchContact())
			{
				std::cout << std::endl;
				break;
			}
		}
		else if (cmd == "EXIT")
		{
			std::cout << "Exiting..." << std::endl;
			break;
		}
		else
			std::cout << "\nThere is no such option among the options..." << std::endl;
	}
	return 0;
}
