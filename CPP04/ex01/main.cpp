#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	out << M << "\n--- 1. ARRAY OF ANIMALS TEST ---\n" << RST << end;
	
	const int arraySize = 4;
	Animal* animals[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	out << M << "\n--- DELETING ARRAY OF ANIMALS ---\n" << RST << end;
	
	for (int i = 0; i < arraySize; i++)
	{
		delete animals[i];
	}

	out << M << "\n--- 2. DEEP COPY TEST: COPY CONSTRUCTOR ---\n" << RST << end;
	
	Dog* dog1 = new Dog();
	dog1->getBrain()->setIdea(0, "I want a bone.");
	dog1->getBrain()->setIdea(1, "I want to play outside.");

	out << W << "\nDog1's initial ideas:" << RST << end;
	dog1->getBrain()->outIdeas();

	Dog* dog2 = new Dog(*dog1);

	out << W << "\nBrain Memory Addresses:" << RST << end;
	out << W << "Dog1 Brain Address: " << RST << dog1->getBrain() << end;
	out << W << "Dog2 Brain Address: " << RST << dog2->getBrain() << end;

	out << W << "\nDog2's ideas after copying from Dog1:" << RST << end;
	dog2->getBrain()->outIdeas();

	out << Y << "\nModifying Dog2's ideas..." << RST << end;
	dog2->getBrain()->setIdea(0, "I want to sleep on the sofa.");

	out << W << "\nDog1's ideas after Dog2 is modified (should be unchanged):" << RST << end;
	dog1->getBrain()->outIdeas();
	out << W << "\nDog2's ideas after modification:" << RST << end;
	dog2->getBrain()->outIdeas();

	out << Y << "\nDeleting Dog1 (Testing if Dog2 survives without crashing)..." << RST << end;
	delete dog1;

	out << W << "Dog2 is still alive and makes a sound: " << RST;
	dog2->makeSound();
	delete dog2;

	out << M << "\n--- 3. DEEP COPY TEST: ASSIGNMENT OPERATOR ---\n" << RST << end;
	
	Cat cat1;
	cat1.getBrain()->setIdea(0, "I want some fish.");
	out << W << "\nCat1's initial ideas:" << RST << end;
	cat1.getBrain()->outIdeas();

	{
		Cat cat2;
		out << Y << "\nAssigning cat1 to cat2..." << RST << end;
		cat2 = cat1;

		out << W << "\nCat2's ideas after assignment:" << RST << end;
		cat2.getBrain()->outIdeas();

		out << W << "Cat1 Brain Address: " << RST << cat1.getBrain() << end;
		out << W << "Cat2 Brain Address: " << RST << cat2.getBrain() << end;
		
		out << Y << "\nModifying Cat2's ideas..." << RST << end;
		cat2.getBrain()->setIdea(0, "I want some milk.");

		out << W << "\nCat1's ideas after Cat2 is modified (should be unchanged):" << RST << end;
		cat1.getBrain()->outIdeas();
		out << W << "\nCat2's ideas after modification:" << RST << end;
		cat2.getBrain()->outIdeas();

		out << Y << "\nCat2 is about to be destroyed (End of scope block)..." << RST << end;
	}

	out << W << "\nCat1 is still alive after Cat2 was destroyed and makes a sound: " << RST;
	cat1.makeSound();
	out << W << "\nCat1's final ideas (should be unchanged):" << RST << end;
	cat1.getBrain()->outIdeas();

	out << M << "\n--- END OF TESTS ---\n" << RST << end;

	return 0;
}