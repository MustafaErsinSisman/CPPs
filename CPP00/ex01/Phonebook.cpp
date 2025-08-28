#include "Phonebook.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::PhoneBook(std::string newPhoneBook) : phoneBook(newPhoneBook) {}

PhoneBook::~PhoneBook()
{
	std::cout << std::endl << "Destructed the " << phoneBook <<std::endl;
}

void PhoneBook::addContact(int newPerson)
{
	std::string newFirstName;
	std::string newLastName;
	std::string newNickName;
	std::string newPhoneNumber;
	std::string newDarkestSecret;
	
	std::cout << "First Name : ";
	std::cin >> newFirstName;
	std::cout << "Last Name : ";
	std::cin >> newLastName;
	std::cout << "Nickname : ";
	std::cin >> newNickName;
	std::cout << "Phonenumber : ";
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
			std::cout << people[i].getFirstName() << std::endl;
		if (people[i].getLastName() != "")
			std::cout << people[i].getLastName() << std::endl;
		if (people[i].getNickName() != "")
			std::cout << people[i].getNickName() << std::endl;
		if (people[i].getPhoneNumber() != "")
			std::cout << people[i].getPhoneNumber() << std::endl;
		if (people[i].getDarkestSecret() != "")
			std::cout << people[i].getDarkestSecret() << std::endl;
	}
}