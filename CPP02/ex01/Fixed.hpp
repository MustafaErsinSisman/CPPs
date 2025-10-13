#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define R	"\033[1;31m"
# define G	"\033[1;32m"
# define Y	"\033[1;33m"
# define B	"\033[1;34m"
# define M	"\033[1;35m"
# define C	"\033[1;36m"
# define W	"\033[0m"

class Fixed
{
	public:
		Fixed();
		Fixed( const int value );
		Fixed( const float value );
		Fixed( const Fixed& copy );
		Fixed&	operator=( const Fixed& copy );
		~Fixed();

		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int			value;
		static const int	bits = 8; // const olunca class içinde değer verebiliyoruz
						// ama const olmasaydı mutlaka dışarıda
						// değer ataması yapmalıydık Fixed::bits = 8; gibi
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif