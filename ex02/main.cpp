#include "Fixed.hpp"

int main(void) 
{
	Fixed a;
	Fixed b(10);
    Fixed c(42.42f);
    Fixed d(b);


	std::cout << "--- Our values : ---" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl << std::endl;

	std::cout << "--- Comparison operators : ---" << std::endl;
	if (c > b)
        std::cout << c << "  is superior to       " << b << std::endl;
    if (b < c)
        std::cout << b << "       is inferior to       " << c << std::endl;
    if (b >= d)
        std::cout << b << "       is sup or equal to   " << d << std::endl;
    if (a <= c)
        std::cout << c << "  is infe or equal to  " << a << std::endl;
    if (b == d)
        std::cout << b << "       is equal to          " << d << std::endl;
    if (a != c)
        std::cout << a << "        is different to      " << c << std::endl << std::endl;

	std::cout << "--- Arithmetic operators : ---" << std::endl;
    std::cout << "b + c = " << b + c << std::endl;
    std::cout << "c - b = " << c - b << std::endl;
    std::cout << "b * b = " << b * b << std::endl;
    std::cout << "b / b = " << b / b << std::endl << std::endl;

	std::cout << "--- Increment : ---" << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a   = " << a << std::endl << std::endl;

	std::cout << "--- Decrement : ---" << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a   = " << a << std::endl << std::endl;

	std::cout << "--- Max and Min function : ---" << std::endl;
	std::cout << "max between a and b : ";
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "min between a and b : ";
	std::cout << Fixed::min(a, b) << std::endl;
	return 0;
}