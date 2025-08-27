#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class	PhoneBook
{
	private:
		int	phoneNumber;
	public:
		PhoneBook(); // constructor daha detaylı öğren
		PhoneBook(int newPhoneNumber);
		
		PhoneBook(PhoneBook & copy); // TODO copy constructer öğren
		// PhoneBook(const PhoneBook & copy); // const olmalı mı

		 ~PhoneBook();	//TODO destructor öğren
		int	getPhoneNumber();
		void	setPhoneNumber(int newPhoneNumber);
		void	printPhoneNumber();

		int operator+(PhoneBook newPhoneNumber); // operator overloading daha detaylı öğren		
};

#endif