#include "Fixed.hpp"

Fixed::Fixed(void) : nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int nbr) : nbr(nbr)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int nbr) : nbr(nbr)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy  constructor called" << std::endl;
	*this = src;
}

float	Fixed::toFloat(void)
{
	return ;
}
int	Fixed::toInt(void)
{
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->nbr;
}

void	Fixed::setRawBits(int const raw)
{
	this->nbr = raw;
	return ;
}

Fixed &	Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->nbr = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}