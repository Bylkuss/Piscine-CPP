/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:41:20 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/16 15:43:01 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->_nb = 0;
}
Fixed::Fixed(int nb)
{
	_nb = nb;
}

Fixed::Fixed(float nb) : _nb(roundf(nb * (1 << this->_bits)))
{
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &assigned)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_nb = assigned.getRawBits();
	return (*this);
}

/*GETTERS AND SETTERS*/
int Fixed::getRawBits(void) const
{
	return (this->_nb);
}

void Fixed::setRawBits(const int raw)
{
	_nb = raw;
}
/*SWITCHING.TO FUNCTIONS*/
float Fixed::toFloat(void) const
{
	return ((float)this->_nb / (1 << _bits));
}

int Fixed::toInt(void) const
{
	return (this->_nb >> _bits);
}

/*COPARISON OPERATORS*/
bool Fixed::operator>(const Fixed &rhs) const
{
	return (_nb > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return (_nb < rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return (_nb != rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return (_nb >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return (_nb <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return (_nb == rhs.getRawBits());
}

/*ARITHMETIC OPERATORS*/
Fixed Fixed::operator+(const Fixed &rhs)
{
	Fixed	res;

	res.setRawBits(_nb + rhs.getRawBits());
	return (res);
}

Fixed Fixed::operator-(const Fixed &rhs)
{
	Fixed	res;

	res.setRawBits(_nb - rhs.getRawBits());
	return (res);
}

Fixed Fixed::operator*(const Fixed &rhs)
{
	Fixed	res;

	res.setRawBits(_nb * rhs.getRawBits());
	std::cout << res << std::endl;
	return (res);
}

Fixed Fixed::operator/(const Fixed &rhs)
{
	Fixed	res;

	res.setRawBits(_nb / rhs.getRawBits());
	return (res);
}

/*INCREMENT/DECREMENT*/
Fixed &Fixed::operator++(void)
{
	_nb++;
	return (*this);
}
Fixed &Fixed::operator--(void)
{
	_nb--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	res;

	res.setRawBits(this->_nb);
	_nb++;
	return (res);
}

Fixed	Fixed::operator--(int)
{
	Fixed	res;

	res.setRawBits(this->_nb);
	this->_nb--;
	return (res);
}

Fixed	&Fixed::min(Fixed &val1, Fixed &val2)
{
	if (val1 < val2)
		return (val1);
	else
		return (val2);
}

Fixed	&Fixed::max(Fixed &val1, Fixed &val2)
{
	if (val1 > val2)
		return (val1);
	else
		return (val2);
}

const Fixed		&Fixed::min(const Fixed &val1, const Fixed &val2)
{
	if (val1 < val2)
		return (val1);
	else
		return (val2);
}

const Fixed		&Fixed::max(const Fixed &val1, const Fixed &val2)
{
	if (val1 > val2)
		return (val1);
	else
		return (val2);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
	out << fixe.toFloat();
	return (out);
}
