#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <string>
#include <iostream>

class PhoneBook {
private:
    Contact contacts[8];
    int index;
    
    std::string getInput(const std::string& prompt);
    std::string getPhoneInput(const std::string& prompt);
    std::string truncateString(const std::string& str);
    void displayTableHeader();
    void displayContactRow(int index);
    bool isValidNumber(const std::string& str);
    bool isSpace(const std::string& prompt);

public:
    void addContact();
    void searchContact();
    void displayAllContacts();
};

#endif