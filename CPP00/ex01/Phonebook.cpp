#include "Phonebook.hpp"

PhoneBook::PhoneBook() : phoneNumber(0) {} //TODO : kullanımı nasıl çalışıyor öğren

PhoneBook::PhoneBook(int newPhoneNumber) : phoneNumber(newPhoneNumber) {}

PhoneBook::PhoneBook(PhoneBook & copy) : phoneNumber(copy.phoneNumber) {} // copy constructer
// PhoneBook::PhoneBook(const PhoneBook & copy) : phoneNumber(copy.phoneNumber) {} // const olmalı mı

PhoneBook::~PhoneBook()
{
	std::cout << "No obje" << phoneNumber << std::endl;
}

int PhoneBook::getPhoneNumber()
{
	return phoneNumber;
}

void PhoneBook::setPhoneNumber(int newPhoneNumber)
{
	phoneNumber = newPhoneNumber;
}

void PhoneBook::printPhoneNumber()
{
	if (phoneNumber == 0)
		std::cout << "No value entered..." << std::endl;
	else
		std::cout << "phone number is " << phoneNumber << std::endl;
}
int PhoneBook::operator+(PhoneBook newPhoneNumber)
{
	int toplam = this->getPhoneNumber();
	
	toplam -= newPhoneNumber.getPhoneNumber();
	return toplam;
}
