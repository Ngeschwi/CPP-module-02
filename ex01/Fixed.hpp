#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <stdio.h>
# include <stdlib.h>
# include <iostream>
# include <iomanip>
# include <math.h>

class Fixed
{
	private:
		int					nbr;
		const static int	nbr_bits;

	public:
		Fixed(void);
		Fixed(const int	nbr);
		Fixed(const float	nbr);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &	operator=(Fixed const & rhs);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif