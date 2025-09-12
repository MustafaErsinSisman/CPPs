#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define R	"\033[1;31m"
# define G	"\033[1;32m"
# define Y	"\033[1;33m"
# define B	"\033[1;34m"
# define W	"\033[0m"

class Fixed
{
	public:
		Fixed();
		Fixed( const int raw );
		Fixed( const Fixed& copy );
		Fixed&	operator=( const Fixed& copy );
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int			raw;
		static const int	bits;
};

#endif