
	//TODO namespace nedir detaylı öğren 
	//TODO ve neden kullanmayıp :: opertörünü kullanıyoruz 
	//TODO ve :: operatörü nasıl çalışıyor öğren
	// constructor daha detaylı öğren

	// TODO copy constructer öğren
		// PhoneBook(const PhoneBook & copy); // const olmalı mı
	
	//TODO destructor öğren
	// operator overloading daha detaylı öğren
	
	//TODO classlarda PhoneBook::PhoneBook() : phoneNumber(0) {} // : kullanımı nasıl çalışıyor öğren
#include "Phonebook.hpp"
#include "Contact.hpp"

int	main(void)
{
	std::string cmd;
	PhoneBook phonebook;
	
	while (1)
	{
		std::cout << "ADD SEARCH HELP EXIT" << std::endl;
		std::cin >> cmd;
		if (cmd == "EXIT")
			break;
	}
	return (0);
}
