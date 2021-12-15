#include "Fixed.hpp"

const int Fixed::nbr_bits = 8;

Fixed::Fixed(void) : nbr(0)
{
	return ;
}

Fixed::Fixed(const int nbr)
{
	float	save;

	save = roundf(nbr * pow(2, this->nbr_bits));
	this->setRawBits(save);
	return ;
}

Fixed::Fixed(const float nbr)
{
	float	save;

	save = roundf(nbr * pow(2, this->nbr_bits));
	this->setRawBits(save);
	return ;
}

Fixed::Fixed(Fixed const & src)
{
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
	if (this != &rhs)
		this->nbr = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(Fixed const &rhs)
{
	if (this->getRawBits() > rhs.getRawBits())
		return 1;
	else
		return 0;
}

bool	Fixed::operator<(Fixed const &rhs)
{
	if (this->getRawBits() < rhs.getRawBits())
		return 1;
	else
		return 0;
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	if (this->getRawBits() >= rhs.getRawBits())
		return 1;
	else
		return 0;
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	if (this->getRawBits() <= rhs.getRawBits())
		return 1;
	else
		return 0;
}

bool	Fixed::operator==(Fixed const &rhs)
{
	if (this->getRawBits() == rhs.getRawBits())
		return 1;
	else
		return 0;
}

bool	Fixed::operator!=(Fixed const &rhs)
{
	if (this->getRawBits() != rhs.getRawBits())
		return 1;
	else
		return 0;
}

float	Fixed::operator+(Fixed const &rhs)
{
	return this->toFloat() + rhs.toFloat();
}

float	Fixed::operator-(Fixed const &rhs)
{
	return this->toFloat() - rhs.toFloat();
}

float	Fixed::operator*(Fixed const &rhs)
{
	return this->toFloat() * rhs.toFloat();
}

float	Fixed::operator/(Fixed const &rhs)
{
	return  this->toFloat() / rhs.toFloat();
}

Fixed &	Fixed::operator++(void)
{
	this->nbr++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed &	Fixed::operator--(void)
{
	this->nbr--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}

float	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a.toFloat() > b.toFloat())
		return a.toFloat();
	else
		return b.toFloat();
}

float	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a.toFloat() < b.toFloat())
		return a.toFloat();
	else
		return b.toFloat();
}

Fixed::~Fixed(void)
{
	return ;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o ;
}
