#include "Fixed.hpp"

const int Fixed::nbr_bits = 8;

Fixed::Fixed(void) : nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(nbr * pow(2, this->nbr_bits));
	return ;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(nbr * pow(2, this->nbr_bits));
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy  constructor called" << std::endl;
	*this = src;
	return ;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(this->nbr) / pow(2, this->nbr_bits);
}

int	Fixed::toInt(void) const
{
	return static_cast<int>(this->nbr) / pow(2, this->nbr_bits);
}

int	Fixed::getRawBits(void) const
{
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

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	float	nbr;

	nbr = rhs.getRawBits() / pow(2, 8);
	o << nbr;
	return o ;
}