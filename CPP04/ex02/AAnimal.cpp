/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:12:22 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/26 18:09:45 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("DefaultAAnimal")
{
    std::cout << YELLOW << _type << " was born! (Default constructor)" << RESET << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << YELLOW << "AAnimal : " + _type << " was born2!" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    std::cout << GREEN " AAnimal copy constructor called!" RESET << std::endl;
    _type = std::string(copy._type);
    *this = copy;
}
AAnimal &AAnimal::operator=(const AAnimal &src)
{
    std::cout << YELLOW "AAnimal assignation operator constructor called!" RESET << std::endl;
    _type = std::string(src._type);
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << YELLOW "A type of AAnimal died!" RESET << std::endl;
}
void AAnimal::makeSound() const
{
    std::cout << "AAnimal sound" << std::endl;
}


void AAnimal::setType(std::string type)
{
    this->_type = type;
}

std::string AAnimal::getType() const
{
    return (this->_type);
}
