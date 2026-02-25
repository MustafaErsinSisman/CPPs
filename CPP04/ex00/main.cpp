#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << M << "\n--- 1. SUBJECT TESTS (Polymorphism) ---\n" << RST << std::endl;

	std::cout << Y << "Constructing Animal, Dog, and Cat...\n" << RST << std::endl;
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << Y << "\nConstructing concrete Dog and Cat...\n" << RST << std::endl;
	const Dog*	d = new Dog();
	const Cat*	c = new Cat();

	std::cout << Y << "\nChecking types:\n" << RST << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;

	std::cout << W << "\nChecking sounds:\n" << RST << std::endl;
	c->makeSound();
	d->makeSound();
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << Y << "\nDestructing objects...\n" << RST << std::endl;
	delete c;
	delete d;
	delete i;
	delete j;
	delete meta;

	std::cout << M << "\n--- 2. WRONG ANIMAL TESTS (No Polymorphism) ---\n" << RST << std::endl;
	std::cout << Y << "Constructing WrongAnimal and WrongCat...\n" << RST << std::endl;
	const WrongAnimal*	k = new WrongCat();
	const WrongCat*		wc = new WrongCat();

	std::cout << W << "\nChecking types:\n" << RST << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;

	std::cout << W << "\nChecking sounds (Expect WrongAnimal sound for 'k'):\n" << RST << std::endl;
	k->makeSound();
	wc->makeSound();

	std::cout << Y << "\nDestructing objects...\n" << RST << std::endl;
	delete wc;
	delete k;
	std::cout << M << "\n--- END OF TESTS ---\n" << RST << std::endl;
	return 0;
}