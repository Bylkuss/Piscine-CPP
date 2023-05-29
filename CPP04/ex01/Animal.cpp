/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:12:22 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/20 16:34:17 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("DefaultAnimal")
{
    std::cout << YELLOW << _type << " was born! (Default constructor)" << RESET << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << YELLOW << "Animal : " + _type << " was born2!" << RESET << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << GREEN " Animal copy constructor called!" RESET << std::endl;
    _type = std::string(copy._type);
    *this = copy;
}
Animal &Animal::operator=(const Animal &src)
{
    std::cout << YELLOW "Animal assignation operator constructor called!" RESET << std::endl;
    _type = std::string(src._type);
    return (*this);
}

Animal::~Animal()
{
    std::cout << YELLOW "A type of Animal died!" RESET << std::endl;
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
