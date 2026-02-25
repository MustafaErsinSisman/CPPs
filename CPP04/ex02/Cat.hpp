#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const str& type);
		Cat(const Cat& copy);
		Cat&	operator=(const Cat& copy);
		~Cat();

		Brain*	getBrain() const;

		void	makeSound() const;
	private:
		Brain*	brain;
};

#endif