/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:54:11 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/26 18:13:01 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"), _brain(new Brain())
{
    std::cout << YELLOW << _type << " was born! (Default constructor)" RESET << std::endl;
}

Cat::Cat(std::string type) : AAnimal(type), _brain(new Brain())
{
    std::cout << YELLOW << _type << " was born!" << RESET << std::endl;
}
Cat::Cat(const Cat& copy) : AAnimal(copy)
{
    std::cout << YELLOW << "Cat copy constructor" << RESET << std::endl;
    this->_brain = new Brain(*copy._brain);
    *this = copy;
}


Cat &Cat::operator=(const Cat &src)
{
    std::cout << YELLOW << "Cat assignation operator constructor" << RESET << std::endl;
    this->_type = src._type;
    this->_brain = new Brain(*src._brain);
    return (*this);
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << YELLOW << "Cat died, Brain deleted!" << RESET << std::endl;
}
Brain* Cat::getBrain() const
{
    return (this->_brain);
}

void Cat::makeSound() const
{
    std::cout << GREEN << "Cat meows" << RESET << std::endl;
}