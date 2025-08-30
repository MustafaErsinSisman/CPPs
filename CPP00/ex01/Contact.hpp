#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    void setFirstName(const std::string& name);
    void setLastName(const std::string& name);
    void setNickName(const std::string& name);
    void setPhoneNumber(const std::string& number);
    void setDarkestSecret(const std::string& secret);
    
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
    
    bool isEmpty() const;
};

#endif