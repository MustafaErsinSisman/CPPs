#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	const Dog*	d = new Dog();
	const Cat*	c = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;

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

	const WrongAnimal*	k = new WrongCat();
	const WrongCat*		wc = new WrongCat();

	std::cout << k->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	k->makeSound();
	wc->makeSound();

	delete wc;
	delete k;
	return 0;
}