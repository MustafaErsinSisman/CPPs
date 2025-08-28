
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
    int personID;
	PhoneBook phonebook = PhoneBook("phone book");
	
    personID = 0;
	do
	{
        if (personID == 8)
            personID = 0;
		std::cout << "ADD SEARCH HELP EXIT" << std::endl;
		if (!(std::cin >> cmd))
            break;
        if (cmd == "ADD")
        {
            phonebook.addContact(personID % 8);
        }
        else if (cmd == "SEARCH")
        {
            std::cout << "SEARCH selected" <<  std::endl;
        }
        else if (cmd == "HELP")
        {
            std::cout << "HELP selected" <<  std::endl;
        }
        else if (cmd == "EXIT")
        {
            std::cout << "EXIT selected" <<  std::endl;
            break;
        }
        else
        {
            std::cout << "No this option..." <<  std::endl;
        }
        phonebook.getPhoneBook();
        personID++;
	}while (cmd != "");
	return (0);
}
