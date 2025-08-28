#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact
{
	private:
                std::string firstName;
                std::string lastName;
                std::string nickName;
                std::string phoneNumber;
                std::string darkestSecret;
	public:
                Contact();
                std::string getFirstName();
                void setFirstName(std::string newFirstName);
                std::string getLastName();
                void setLastName(std::string newLastName);
                std::string getNickName();
                void setNickName(std::string newNickName);
                std::string getPhoneNumber();
                void setPhoneNumber(std::string newPhoneNumber);
                std::string getDarkestSecret();
                void setDarkestSecret(std::string newDarkestSecret);
                ~Contact();
};

#endif