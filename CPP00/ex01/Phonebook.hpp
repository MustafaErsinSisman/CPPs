#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class	PhoneBook
{
	private:
		int	phoneNumber;
	public:
		PhoneBook(); // consructec daha detaylı öğren
		PhoneBook(int newPhoneNumber);
		// ~PhoneBook();	//TODO destructor öğren
		int	getPhoneNumber();
		void	setPhoneNumber(int newPhoneNumber);
		void	printPhoneNumber();
};

#endif