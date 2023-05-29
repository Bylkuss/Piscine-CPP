/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:26:45 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/26 19:19:54 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice()
{
    std::cout << YELLOW "Ice default constructor called" RESET << std::endl;
}
Ice::Ice(Ice const &i)
{
    std::cout << YELLOW "Ice copy constructor called" RESET << std::endl;
    *this = i;
}
Ice::Ice &operator=(Ice const &rhs)
{
    std::cout << YELLOW "Ice assignation operator called" RESET << std::endl;
    this->AMateria::operator=(rhs);
    return (*this);
}

Ice::~Ice()
{
    std::cout << YELLOW "Ice destructor called" RESET << std::endl;
}
AMateria* Ice::clone() const
{
    return (new Ice());
}