/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:54:11 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/18 15:07:24 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    // this->_type = "Cat";
    std::cout << YELLOW << _type << " was born!" << RESET << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    *this = copy;
}
Cat &Cat::operator=(const Cat &src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << YELLOW << "Cat died!" << RESET << std::endl;
}
void Cat::makeSound() const
{
    std::cout << GREEN << "Cat meows" << RESET << std::endl;
}