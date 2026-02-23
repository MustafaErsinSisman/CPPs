#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	const Dog*	d = new Dog();
	const Cat*	c = new Cat();

	const Dog*	cd(d);
	const Cat*	cc = c;


	out << meta->getType() << " " << end;
	out << j->getType() << " " << end;
	out << i->getType() << " " << end;
	out << d->getType() << " " << end;
	out << c->getType() << " " << end;
	out << cd->getType() << " " << end;
	out << cc->getType() << " " << end;

	cc->makeSound();
	cd->makeSound();
	c->makeSound();
	d->makeSound();
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete c;
	delete d;
	delete i;
	delete j;
	delete meta;

	const Animal*	animalList[4];

	for (size_t i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			animalList[i] = new Dog();
		else
			animalList[i] = new Cat();
	}
	
	for (size_t i = 0; i < 4; i++)
		delete animalList[i];
	
	return 0;
}