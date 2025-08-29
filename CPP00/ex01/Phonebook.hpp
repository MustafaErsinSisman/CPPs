#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <cstdlib>

class	PhoneBook
{
	private:
		std::string	phoneBook;
		Contact	people[8];
	public:
		void getPhoneBook();
		int addContact(int  newPerson);
};
#endif