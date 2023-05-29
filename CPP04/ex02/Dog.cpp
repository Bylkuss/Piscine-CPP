/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:35:38 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/26 18:13:06 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"), _brain(new Brain())
{
    std::cout << YELLOW << _type << " was born! (Default constructor)" RESET << std::endl;
}

Dog::Dog(std::string type) : AAnimal(type), _brain(new Brain())
{
    std::cout << YELLOW << _type << " was born1!" << RESET << std::endl;
}

Dog::Dog(const Dog& copy)  : AAnimal(copy)
{
    _brain = new Brain(*copy._brain);
    std::cout << YELLOW << "Dog copy constructor" << RESET << std::endl;
    *this = copy;
}


Dog &Dog::operator=(const Dog &src)
{
    if(this != &src)
    {
        this->_brain = new Brain(*src._brain);
        this->_type = src._type;
    }
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