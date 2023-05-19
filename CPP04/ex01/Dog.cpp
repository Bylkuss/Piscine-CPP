/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:35:38 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/19 11:36:34 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
    std::cout << YELLOW << _type << " was born! (Default constructor)" RESET << std::endl;
}

Dog::Dog(std::string type) : Animal(type), _brain(new Brain())
{
    std::cout << YELLOW << _type << " was born!" << RESET << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
    _brain = new Brain(*copy._brain);
    std::cout << YELLOW << "Dog copy constructor" << RESET << std::endl;
}


Dog &Dog::operator=(const Dog &src)
{
    this->_brain = new Brain(*src._brain);
    this->_type = src._type;
    return (*this);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << YELLOW << "Dog died, Brain deleted!" << RESET << std::endl;
}

Brain* Dog::getBrain() const
{
    return (this->_brain);
}

void Dog::makeSound() const
{
    std::cout << GREEN << "Dog barks" << RESET << std::endl;
}