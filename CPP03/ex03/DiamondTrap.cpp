/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:43:36 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/17 15:32:15 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("defaultDTClapTrap")
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->_name = "defaultDT";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    std::cout << YELLOW << name << " DiamondTrap constructor called" << RESET << std::endl;
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "\033[3;32m" << "See? Only one ClapTrap subobject created for " << this->_name << "!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    std::cout << YELLOW << "Assignation DiamonTrap constructor called!" << RESET << std::endl;
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << YELLOW << "DiamondTrap destroyed" << RESET << std::endl;
}
void DiamondTrap::whoAmI()
{
    std::cout << GREEN << "Hey👋 my name is " << this->_name << " and ClapTrap's name is " << ClapTrap::_name << RESET << std::endl;
}
void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}