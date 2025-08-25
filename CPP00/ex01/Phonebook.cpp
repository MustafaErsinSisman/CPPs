#include "Phonebook.hpp"

void PhoneBook::getPhoneNumber()
{
	std::cout << PhoneBook::phoneNumber << std::endl;
}

void PhoneBook::setPhoneNumber(int newPhoneNumber)
{
	PhoneBook::phoneNumber = newPhoneNumber;
}