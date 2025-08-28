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
	std::string personID;
	int id;

	std::cout << "|" << std::setw(10) << "INDEX"
			<< "|" << std::setw(10) << "FIRST NAME"
			<< "|" << std::setw(10)	<< "LAST NAME"
			<< "|" << std::setw(10) << "NICKNAME"
			<< "|" << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		if (people[i].getFirstName() != "")
			std::cout << "|" << std::setw(10) << i + 1
					<< "|" << std::setw(10) << people[i].getFirstName()
					<< "|" << std::setw(10) << people[i].getLastName()
					<< "|" << std::setw(10) << people[i].getNickName()
					<< "|" << std::endl;
	}
	id = 0;
	while (1)
	{
		if (!(std::cin >> personID))
			return;
		id = std::atoi(personID.c_str());
		if (id < 1 || id > 8)
			std::cout << "Wrong id value. Please enter 1-8..." << std::endl;
		else
			break;
	}
	if (people[id - 1].getFirstName() != "")
		std::cout << id << ". First Name  :" << people[id - 1].getFirstName() << std::endl;
	else
		std::cout << "Not listed in the phone book" << std::endl;
	if (people[id - 1].getLastName() != "")
		std::cout << id << ". Last Name   :" << people[id - 1].getLastName() << std::endl;
	if (people[id - 1].getNickName() != "")
		std::cout << id << ". Nickname    :" << people[id - 1].getNickName() << std::endl;
	if (people[id - 1].getPhoneNumber() != "")
		std::cout << id << ". Phonenumber :"<< people[id - 1].getPhoneNumber() << std::endl;
}
