#include "Phonebook.hpp"

static std::string getContactsInfos(std::string infos, std::string subject)
{
	while (true)
	{
		std::cout << subject;
		if (!std::getline(std::cin, infos))
			return "";
		unsigned long i = 0;
		while (i < infos.size() && (infos[i] == 32 || (infos[i] > 9 && infos[i] < 13)))
			i++;	
		if (i == infos.size())
		{
			std::cout << "No space..." << std::endl;
			continue;
		}
		return infos;
	}
	return infos;
}

int PhoneBook::addContact(int newPerson)
{
	std::string newFirstName;
	std::string newLastName;
	std::string newNickName;
	std::string newPhoneNumber;
	std::string newDarkestSecret;
	int i;
	bool digit;

	newFirstName = getContactsInfos(newFirstName, "First Name     :");
	if (newFirstName.empty())
		return 1;
	newLastName = getContactsInfos(newLastName, "Last Name      :");
	if (newLastName.empty())
		return 1;
	newNickName = getContactsInfos(newNickName, "Nickname       :");
	if (newNickName.empty())
		return 1;

	digit = true;
	while(digit)
	{
		std::cout << "Phonenumber    : ";
		if (!(std::getline(std::cin, newPhoneNumber)))
			return 1;
		i = -1;
		while(newPhoneNumber[++i])
		{
			if (!std::isdigit(static_cast<unsigned char>(newPhoneNumber[i])))
			{
				std::cout << "Only numbers are acceptable..." << std::endl;
				digit = 1;
				break;
			}
			else
				digit = 0;
		}
	}
	if (newPhoneNumber.empty())
		return 1;
	newDarkestSecret = getContactsInfos(newDarkestSecret, "Darkest Secret :");
	if (newDarkestSecret.empty())
		return 1;
	people[newPerson].setFirstName(newFirstName);
	people[newPerson].setLastName(newLastName);	
	people[newPerson].setNickName(newNickName);
	people[newPerson].setPhoneNumber(newPhoneNumber);
	people[newPerson].setDarkestSecret(newDarkestSecret);
	return 0;
}

void PhoneBook::getPhoneBook()
{
	std::string personID;
	int id;

	std::cout << "|" << std::setw(10) << "INDEX"
			<< "|" << std::setw(10) << "FIRSTNAME"
			<< "|" << std::setw(10)	<< "LASTNAME"
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
		if (!std::getline(std::cin, personID))
			break;
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
