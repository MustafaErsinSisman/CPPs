#include "Phonebook.hpp"

int	main(void)
{
	PhoneBook	p1;

	std::cout << "P1 info" << std::endl;
	p1.printPhoneNumber();
	p1.setPhoneNumber(123);
	p1.printPhoneNumber();
	std::cout << std::endl;

	PhoneBook	*p2 = new PhoneBook();
	
	std::cout << "P2 info" << std::endl;
	p2->printPhoneNumber();
	p2->setPhoneNumber(123);
	p2->printPhoneNumber();
	std::cout << std::endl;

	PhoneBook	*p3 = new PhoneBook(333);
	
	std::cout << "P3 info" << std::endl;
	p3->printPhoneNumber();
	p3->setPhoneNumber(123);
	p3->printPhoneNumber();
	std::cout << std::endl;

	delete p2;
	p2 = 0;
	delete p3;
	p3 = 0;
	return (0);
}
