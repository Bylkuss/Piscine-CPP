/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:50:14 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/17 10:29:26 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_guardeMode = false;   
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_guardeMode = false;
}



        // ScavTrap(std::string name);
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << YELLOW << "ScavTrap copy constructor called" << RESET << std::endl;
    this->_guardeMode = copy._guardeMode;
    *this = copy;
} 

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;       
    return (*this);
}

ScavTrap::~ScavTrap()
{
}

void ScavTrap::guardGate()
{
    if(this->_guardeMode == false)
    {
        this->_guardeMode = true;
        std::cout << YELLOW << "ScavTrap " << this->_name << " has enterred in Gate keeper mode" << RESET << std::endl;
    }
    else
    {
        this->_guardeMode = false;
        std::cout << YELLOW << "ScavTrap " << this->_name << "  is already guarding the gate." << RESET << std::endl;
    }
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_attackDamage++;
        std::cout << RED << "ScavTrap " << this->_name << " attacks " << target << ", causing " 
        << this->_attackDamage << " points of damage!" << RESET << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << RED << "ScavTrap " << this->_name << " has no energy points or hit points left!" << RESET << std::endl;
}