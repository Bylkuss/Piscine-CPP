/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:27:46 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/26 19:20:37 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure()
{
    std::cout << YELLOW "Cure default constructor called" RESET << std::endl;
}

Cure::Cure(Cure const &i)
{
    std::cout << YELLOW "Cure copy constructor called" RESET << std::endl;
    *this = i;
}

Cure::Cure &operator=(Cure const &i)
{
    std::cout << YELLOW "Cure assignation operator called" RESET << std::endl;
    if (this != &i)
    {
        
    }
    return (*this);
}

Cure::~Cure()
{
    std::cout << YELLOW "Cure destructor called" RESET << std::endl;
}
