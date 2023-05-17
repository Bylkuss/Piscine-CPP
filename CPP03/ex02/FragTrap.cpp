/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:15:53 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/17 12:25:58 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << YELLOW << "FragTrap default constructor called" << RESET << std::endl;   
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << YELLOW << name << " constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << YELLOW << "FragTrap copy constructor called" << RESET << std::endl;
    this->_name = copy._name;
    *this = copy;
} 

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << YELLOW << "FragTrap assignation operator called" << RESET << std::endl;
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;       
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << YELLOW << "FragTrap destroyed" << RESET << std::endl;
}



void FragTrap::highFivesGuys(void)
{
    std::cout << GREEN << "FragTrap " << this->_name << " wants to high five!" << RESET << std::endl;
}