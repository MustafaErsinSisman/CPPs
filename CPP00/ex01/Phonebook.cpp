#include "Phonebook.hpp"

static std::string getContactsInfos(std::string infos, std::string subject)
{
	unsigned long i;

	while (true)
	{
		std::cout << subject;
		if (!std::getline(std::cin, infos))
			return "";
		i = 0;
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

static std::string getNumber(std::string number, std::string text)
{
	bool digit;
	unsigned long i;

	digit = 1;
	while(digit)
	{
		std::cout << text;
		if (!(std::getline(std::cin, number)))
			return "";
		i = 0;
		while (i < number.size() && (number[i] == 32 || (number[i] > 9 && number[i] < 13)))
			i++;	
		if (number.empty() || i == number.size())
		{
			std::cout << "No space..." << std::endl;
			continue;
		}
		i = -1;
		while(number[++i])
		{
			if (!std::isdigit(static_cast<unsigned char>(number[i])))
			{
				std::cout << "Only numbers are acceptable..." << std::endl;
				digit = 1;
				break;
			}
			else
				digit = 0;
		}
	}
	return number;
}

std::string longInfosDisplay(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return str;
}
void addTableText(std::string text)
{
	if (text.empty())
		std::cout << "|" << std::endl;
	else
		std::cout << "|" << std::setw(10) << text;
}
int PhoneBook::addContact(int newPerson)
{
	std::string newFirstName;
	std::string newLastName;
	std::string newNickName;
	std::string newPhoneNumber;
	std::string newDarkestSecret;

	newFirstName = getContactsInfos(newFirstName, "First Name     :");
	if (newFirstName.empty())
		return 1;
	newLastName = getContactsInfos(newLastName, "Last Name      :");
	if (newLastName.empty())
		return 1;
	newNickName = getContactsInfos(newNickName, "Nickname       :");
	if (newNickName.empty())
		return 1;
	newPhoneNumber = getNumber(newPhoneNumber, "Phonenumber    : ");
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

int PhoneBook::getPhoneBook()
{
	std::string personID;
	int id;

	addTableText("INDEX");
	addTableText("FIRSTNAME");
	addTableText("LASTNAME");
	addTableText("NICKNAME");
	addTableText("");
	for (size_t i = 0; i < 8; i++)
	{
		if (people[i].getFirstName() != "")
		{
			std::cout << "|" << std::setw(10) << i + 1;
			addTableText(longInfosDisplay(people[i].getFirstName()));
			addTableText(longInfosDisplay(people[i].getLastName()));
			addTableText(longInfosDisplay(people[i].getNickName()));
			addTableText("");
		}
	}
	id = 0;
	while (1)
	{
		personID = getNumber(personID, "Indis: ");
		if (personID.empty())
			return 1;
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
	return 0;
}
