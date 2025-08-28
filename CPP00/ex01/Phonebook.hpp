#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		std::string	phoneBook;
		Contact	people[8];
	public:
		PhoneBook();
		PhoneBook(std::string newPhoneBook);
		void getPhoneBook();
		void addContact(int  newPerson);
		~PhoneBook();
};
#endif