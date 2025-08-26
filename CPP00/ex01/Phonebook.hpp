#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class	PhoneBook
{
	private:
		int	phoneNumber;
	public:
		PhoneBook();
		PhoneBook(int newPhoneNumber);
		// ~PhoneBook();
		int	getPhoneNumber();
		void	setPhoneNumber(int newPhoneNumber);
		void	printPhoneNumber();
};

#endif