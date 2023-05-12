/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:41:20 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/12 12:52:42 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
    this->_nb = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
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

void Fixed::setRawBits(const int bits)
{
    this->_bits = bits;    
}

int Fixed::getRawBits(void) const
{
	return (this->_bits);
}
