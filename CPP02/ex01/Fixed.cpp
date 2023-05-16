/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:41:20 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/16 13:07:03 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
    this->_nb = 0;
}
Fixed::Fixed(int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nb = nb << _bits;
}

Fixed::Fixed(float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf(nb * (1 << _bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &assigned)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_nb = assigned.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixe)
{
	out << fixe.toFloat();
	return(out);
}

int Fixed::getRawBits(void) const
{
	return (this->_nb);
}

void Fixed::setRawBits(const int raw)
{
    _nb = raw;    
}
float		Fixed::toFloat(void) const
{
	return ((float)this->_nb / (1 << _bits));
}

int			Fixed::toInt(void) const
{
	return (this->_nb >> _bits);
}