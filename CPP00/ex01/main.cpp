
	//TODO namespace nedir detaylı öğren 
	//TODO ve neden kullanmayıp :: opertörünü kullanıyoruz 
	//TODO ve :: operatörü nasıl çalışıyor öğren
	//TODO std methodlarını  öğren mesela getline cout cin

    //TODO string nasıl işliyor ve methodlarını öğren
    //TODO operator overloading öğren
	//TODO classlarda PhoneBook::PhoneBook() : phoneNumber(0) {} // : kullanımı nasıl çalışıyor öğren
#include "Phonebook.hpp"

int main() {
    PhoneBook phonebook;
    std::string cmd;
    
    std::cout << "======= PHONE BOOK =======" << std::endl;
    
    while (true) {
        std::cout << "\nOPTIONS      : ADD, SEARCH, EXIT" << std::endl;
        std::cout << "Enter option : ";
        
        if (!std::getline(std::cin, cmd))
        {
            std::cout << std::endl;
            break;
        }
		
        //TODO daha iyi bir giriş şartı eklenmeli
        if (cmd == "ADD") {
            phonebook.addContact();
        }
        else if (cmd == "SEARCH") {
            phonebook.searchContact();
        }
        else if (cmd == "EXIT") {
            std::cout << "Exiting..." << std::endl;
            break;
        }
        else {
            std::cout << "\nThere is no such option among the options..." << std::endl;
        }
    }
    
    return 0;
}
