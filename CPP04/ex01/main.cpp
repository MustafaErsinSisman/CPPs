#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << M << "\n--- 1. SUBJECT TEST ---\n" << RST << std::endl;

	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete j;
	delete i;

	std::cout << M << "\n--- 2. ARRAY OF ANIMALS TEST ---\n" << RST << std::endl;
	
	const int	arrayLength = 2;
	Animal*		animals[arrayLength];

	for (int i = 0; i < arrayLength; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << Y << "\nDestructing objects...\n" << RST << std::endl;
	
	for (int i = 0; i < arrayLength; i++)
		delete animals[i];

	std::cout << M << "\n--- 3. DEEP COPY TEST: COPY CONSTRUCTOR ---\n" << RST << std::endl;
	
	Dog* dog1 = new Dog();
	dog1->getBrain()->setIdea(0, "I want a bone.");
	dog1->getBrain()->setIdea(1, "I want to play outside.");

	std::cout << W << "\nDog1's initial ideas:" << RST << std::endl;
	dog1->getBrain()->outIdeas();

	Dog* dog2 = new Dog(*dog1);

	std::cout << W << "\nBrain Memory Addresses:" << RST << std::endl;
	std::cout << W << "Dog1 Brain Address: " << RST << dog1->getBrain() << std::endl;
	std::cout << W << "Dog2 Brain Address: " << RST << dog2->getBrain() << std::endl;

	std::cout << W << "\nDog2's ideas after copying from Dog1:" << RST << std::endl;
	dog2->getBrain()->outIdeas();

	std::cout << Y << "\nModifying Dog2's ideas..." << RST << std::endl;
	dog2->getBrain()->setIdea(0, "I want to sleep on the sofa.");

	std::cout << W << "\nDog1's ideas after Dog2 is modified (should be unchanged):" << RST << std::endl;
	dog1->getBrain()->outIdeas();
	std::cout << W << "\nDog2's ideas after modification:" << RST << std::endl;
	dog2->getBrain()->outIdeas();

	std::cout << Y << "\nDeleting Dog1 (Testing if Dog2 survives without crashing)..." << RST << std::endl;
	delete dog1;

	std::cout << W << "Dog2 is still alive and makes a sound: \n" << RST;
	dog2->makeSound();
	delete dog2;

	std::cout << M << "\n--- 4. DEEP COPY TEST: ASSIGNMENT OPERATOR ---\n" << RST << std::endl;
	
	Cat cat1;
	cat1.getBrain()->setIdea(0, "I want some fish.");
	std::cout << W << "\nCat1's initial ideas:" << RST << std::endl;
	cat1.getBrain()->outIdeas();

	{
		Cat cat2;
		cat2 = cat1;

		std::cout << W << "\nCat2's ideas after assignment:" << RST << std::endl;
		cat2.getBrain()->outIdeas();

		std::cout << W << "\nCat1 Brain Address: " << RST << cat1.getBrain() << std::endl;
		std::cout << W << "Cat2 Brain Address: " << RST << cat2.getBrain() << std::endl;
		
		std::cout << Y << "\nModifying Cat2's ideas..." << RST << std::endl;
		cat2.getBrain()->setIdea(0, "I want some milk.");

		std::cout << W << "\nCat1's ideas after Cat2 is modified (should be unchanged):" << RST << std::endl;
		cat1.getBrain()->outIdeas();
		std::cout << W << "\nCat2's ideas after modification:" << RST << std::endl;
		cat2.getBrain()->outIdeas();

		std::cout << Y << "\nCat2 is about to be destroyed (End of scope block)..." << RST << std::endl;
	}

	std::cout << W << "\nCat1 is still alive after Cat2 was destroyed and makes a sound: \n" << RST;
	cat1.makeSound();
	std::cout << W << "\nCat1's ideas after Cat2 was destroyed(should be unchanged):" << RST << std::endl;
	cat1.getBrain()->outIdeas();

	std::cout << M << "\n--- END OF TESTS ---\n" << RST << std::endl;

	return 0;
}