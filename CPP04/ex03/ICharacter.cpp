/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:21:20 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/26 19:27:38 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
    std::cout << YELLOW "ICharacter default constructor called" RESET << std::endl;
}

ICharacter::ICharacter(ICharacter const &i)
{
    std::cout << YELLOW "ICharacter copy constructor called" RESET << std::endl;
    *this = i;
}
ICharacter::ICharacter &operator=(ICharacter const &i)
{
    std::cout << YELLOW "ICharacter assignation operator called" RESET << std::endl;
    if (this != &i)
    {
        
    }
    return (*this);
}
