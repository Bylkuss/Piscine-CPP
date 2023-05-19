/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:51:26 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/18 17:13:43 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << YELLOW << _type << " was born!" << RESET << std::endl;
}


WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << YELLOW << "WrongCat died!" << RESET << std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << GREEN << "WrongCat barks" << RESET << std::endl;
}