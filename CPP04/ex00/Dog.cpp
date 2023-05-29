/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:35:38 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/18 17:26:15 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << YELLOW << _type << " was born!" << RESET << std::endl;
}


Dog::Dog(const Dog &copy) : Animal(copy)
{
    *this = copy;
}

Dog &Dog::operator=(const Dog &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << YELLOW << "Dog died!" << RESET << std::endl;
}
void Dog::makeSound() const
{
    std::cout << GREEN << "Dog barks" << RESET << std::endl;
}