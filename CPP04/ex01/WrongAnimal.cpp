/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:23:10 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/18 16:47:44 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// WrongAnimal::WrongAnimal() : Animal("WrongAnimal")
// {
//     std::cout << YELLOW << _type << " was born!" << RESET << std::endl;
// }


// WrongAnimal::WrongAnimal(const WrongAnimal &copy) : Animal(copy)
// {
//     *this = copy;
// }

// WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
// {
//     if (this != &src)
//     {
//         this->_type = src._type;
//     }
//     return (*this);
// }

// WrongAnimal::~WrongAnimal()
// {
//     std::cout << YELLOW << "WrongAnimal died!" << RESET << std::endl;
// }
// void WrongAnimal::makeSound() const
// {
//     std::cout << GREEN << "WrongAnimal makes sound" << RESET << std::endl;
// }


WrongAnimal::WrongAnimal()
{
    std::cout << YELLOW << "A type of WrongAnimal was born!" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}


void WrongAnimal::setType(std::string type)
{
    this->_type = type;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << YELLOW << "A type of WrongAnimal died!" << RESET << std::endl;
}