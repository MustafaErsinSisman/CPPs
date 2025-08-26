#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->phoneNumber = 0;
}

PhoneBook::PhoneBook(int newPhoneNumber)
{
	phoneNumber = newPhoneNumber;
}

int PhoneBook::getPhoneNumber()
{
	return phoneNumber;
}

void PhoneBook::setPhoneNumber(int newPhoneNumber)
{
	phoneNumber = newPhoneNumber;
}

void PhoneBook::printPhoneNumber()
{
	if (phoneNumber == 0)
		std::cout << "No value entered..." << std::endl;
	else
		std::cout << "phone number is " << phoneNumber << std::endl;
}