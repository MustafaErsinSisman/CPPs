#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class	PhoneBook
{
	public:
		void	getPhoneNumber();
		void	setPhoneNumber(int newPhoneNumber);
	private:
		int	phoneNumber;
};

#endif