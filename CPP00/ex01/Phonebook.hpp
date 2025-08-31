#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <string>

class PhoneBook
{
	private:
		Contact	contacts[8];
		int	index;

		bool	isSpace(const std::string& prompt);
		bool	isValidNumber(const std::string& str);
		std::string	truncateString(const std::string& str);

		std::string	getInput(const std::string& prompt);
		std::string	getPhoneInput(const std::string& prompt);

		void	displayTableHeader();
		void	displayContactRow(int index);
		void	displayAllContacts();

	public:
		PhoneBook();
		int	addContact();
		int	searchContact();
};

#endif