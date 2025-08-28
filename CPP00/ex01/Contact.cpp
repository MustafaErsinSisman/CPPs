#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact()
{
	std::cout << std::endl
                        << "Destructed the "
                        << firstName
                        << " "
                        << lastName
                        << "infos"
                        <<std::endl;
}
std::string Contact::getFirstName()
{
        return firstName;
}
void Contact::setFirstName(std::string newFirstName)
{
        firstName = newFirstName;
}
std::string Contact::getLastName()
{
        return lastName;
}
void Contact::setLastName(std::string newLastName)
{
        lastName = newLastName;
}
std::string Contact::getNickName()
{
        return nickName;
}
void Contact::setNickName(std::string newNickName)
{
        nickName = newNickName;
}
std::string Contact::getPhoneNumber()
{
        return phoneNumber;
}
void Contact::setPhoneNumber(std::string newPhoneNumber)
{
        phoneNumber = newPhoneNumber;
}
std::string Contact::getDarkestSecret()
{
        return darkestSecret;
}
void Contact::setDarkestSecret(std::string newDarkestSecret)
{
        darkestSecret = newDarkestSecret;
}