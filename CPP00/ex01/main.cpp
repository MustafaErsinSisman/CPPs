#include "Phonebook.hpp"

	//TODO namespace nedir detaylı öğren 
	//TODO ve neden kullanmayıp :: opertörünü kullanıyoruz 
	//TODO ve :: operatörü nasıl çalışıyor öğren

int	main(void)
{
	PhoneBook	p1;
	PhoneBook	p2;
	int	newPhoneNumber;

	std::cout << "1: " << std::endl;
	p1.setPhoneNumber(123);
	std::cout << "2: " << std::endl;
	p2.setPhoneNumber(124);
	std::cout << "3: " << std::endl;
	newPhoneNumber = p1 + p2; // operator overloading
	std::cout << "4: " << std::endl;
	p2.printPhoneNumber();
	std::cout << "New phoner number is " << newPhoneNumber << std::endl;
	std::cout << "5: " << std::endl;


	return (0);
}
