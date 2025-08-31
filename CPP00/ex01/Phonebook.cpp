#include "Phonebook.hpp"

PhoneBook::PhoneBook() : index(0) {}

bool PhoneBook::isSpace(const std::string& prompt)
{
    int i;
    int status;

    i = 0;
    status = 0;
    while (std::isspace(prompt[i]))
		i++;
	if (!prompt[i])
		status = 1;
	return status;
}

bool PhoneBook::isValidNumber(const std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
	{
        if (!std::isdigit(str[i]) && !isSpace(str))
            return false;
    }
    return true;
}

std::string PhoneBook::truncateString(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

std::string PhoneBook::getInput(const std::string& prompt)
{
    std::string input;
    
    while (true)
	{
        std::cout << prompt;
        if (!std::getline(std::cin, input))
            return "";
        if (!input.empty() && !isSpace(input))
            return input;
        std::cout << "This field cannot be left blank!" << std::endl;
    }
}

std::string PhoneBook::getPhoneInput(const std::string& prompt)
{
    std::string input;
    
    while (true)
	{
        input = getInput(prompt);
        if (input.empty())
            return "";
        if (isValidNumber(input))
            return input;
        std::cout << "You can only enter numbers!" << std::endl;
    }
}

void PhoneBook::addContact()
{
    std::cout << std::endl;
    std::string firstName = getInput("First Name: ");
    if (firstName.empty()) return;
    std::string lastName = getInput("Last Name: ");
    if (lastName.empty()) return;
    std::string nickName = getInput("Nickname: ");
    if (nickName.empty()) return;
    std::string phoneNumber = getPhoneInput("Phone Number: ");
    if (phoneNumber.empty()) return;    
    std::string darkestSecret = getInput("Darkest Secret: ");
    if (darkestSecret.empty()) return;

    contacts[index].setFirstName(firstName);
    contacts[index].setLastName(lastName);
    contacts[index].setNickName(nickName);
    contacts[index].setPhoneNumber(phoneNumber);
    contacts[index].setDarkestSecret(darkestSecret);
    std::cout << "\nContact successfully added!" << std::endl;    
    index = (index + 1) % 8;
}

void PhoneBook::displayTableHeader()
{
    std::cout << std::endl 
                << "|" << std::setw(10) << "INDEX"
                << "|" << std::setw(10) << "FIRST NAME"
                << "|" << std::setw(10) << "LAST NAME"
                << "|" << std::setw(10) << "NICKNAME"
                << "|" << std::endl;
}

void PhoneBook::displayContactRow(int index)
{
    if (contacts[index].isEmpty())
        return;
    std::cout << "|" << std::setw(10) << (index + 1)
                << "|" << std::setw(10) << truncateString(contacts[index].getFirstName())
                << "|" << std::setw(10) << truncateString(contacts[index].getLastName())
                << "|" << std::setw(10) << truncateString(contacts[index].getNickName())
                << "|" << std::endl;
}

void PhoneBook::displayAllContacts()
{
    displayTableHeader();
    
    for (int i = 0; i < 8; i++)
        displayContactRow(i);
}

void PhoneBook::searchContact()
{
    std::string input;
    int index;
        
	displayAllContacts();
	while(true)
	{
		std::cout << "\nEnter the index of the contact you want to see (1-8): ";
		if (!std::getline(std::cin, input))
			return;	
        if (input.length() != 1 || (input[0] < '1' || input[0] > '8'))
			std::cout << "Invalid index! (must be between 1-8)" << std::endl;
		else
			break ;
	}	
    index = input[0] - '1';
    if (contacts[index].isEmpty())
	{
        std::cout << "\nNo contact found in this index!" << std::endl;
        return ;
    }
    std::cout << "\nFirst Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}

