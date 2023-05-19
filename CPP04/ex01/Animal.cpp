/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:12:22 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/18 15:08:17 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << YELLOW << "A type of Animal was born!" << RESET << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
}
Animal &Animal::operator=(const Animal &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}


void Animal::setType(std::string type)
{
    this->_type = type;
}

std::string Animal::getType() const
{
    return (this->_type);
}

Animal::~Animal()
{
    std::cout << YELLOW << "A type of Animal died!" << RESET << std::endl;
}