#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# define RST	"\033[0m"

# define D	"\033[1;30m"
# define R	"\033[1;31m"
# define G	"\033[1;32m"
# define Y	"\033[1;33m"
# define B	"\033[1;34m"
# define M	"\033[1;35m"
# define C	"\033[1;36m"
# define W	"\033[1;37m"

# define DB	"\033[40m"
# define RB	"\033[41m"
# define GB	"\033[42m"
# define YB	"\033[43m"
# define BB	"\033[44m"
# define MB	"\033[45m"
# define CB	"\033[46m"
# define WB	"\033[47m"

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const std::string& type);
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal&		operator=(const WrongAnimal& copy);
		~WrongAnimal();

		std::string	getType() const;
		void		setType(const std::string& type);

		void		makeSound() const;
	protected:
		std::string	type;
};

#endif