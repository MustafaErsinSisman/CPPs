#include "Phonebook.hpp"

void PhoneBook::addContact(int newPerson)
{
	std::string newFirstName;
	std::string newLastName;
	std::string newNickName;
	std::string newPhoneNumber;
	std::string newDarkestSecret;
	
	std::cout << "First Name     : ";
	std::cin >> newFirstName;
	std::cout << "Last Name      : ";
	std::cin >> newLastName;
	std::cout << "Nickname       : ";
	std::cin >> newNickName;
	std::cout << "Phonenumber    : ";
	std::cin >> newPhoneNumber;
	std::cout << "Darkest Secret : ";
	std::cin >> newDarkestSecret;
	people[newPerson].setFirstName(newFirstName);
	people[newPerson].setLastName(newLastName);	
	people[newPerson].setNickName(newNickName);
	people[newPerson].setPhoneNumber(newPhoneNumber);
	people[newPerson].setDarkestSecret(newDarkestSecret);
}

void PhoneBook::getPhoneBook()
{
	for (size_t i = 0; i < 8; i++)
	{
		if (people[i].getFirstName() != "")
			std::cout << i <<". First Name   :" << people[i].getFirstName() << std::endl;
		if (people[i].getLastName() != "")
			std::cout << i <<". Last Name    :" << people[i].getLastName() << std::endl;
		if (people[i].getNickName() != "")
			std::cout << i << ". Nickname    :" << people[i].getNickName() << std::endl;
		if (people[i].getPhoneNumber() != "")
			std::cout << i << ". Phonenumber :"<< people[i].getPhoneNumber() << std::endl;
		std::cout << std::endl;
	}
}
