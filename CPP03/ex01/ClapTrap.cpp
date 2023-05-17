/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:08:15 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/16 21:03:50 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << YELLOW << "ClapTrap default constructor called" << RESET << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << YELLOW << name << " constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << YELLOW << "ClapTrap copy constructor called" << RESET << std::endl;
    *this = other;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Assignation ClapTrap Constructor Called!" << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return *this;
}


ClapTrap::~ClapTrap()
{
    std::cout << YELLOW << "ClapTrap destructor called" << RESET << std::endl;
}




void ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_attackDamage++;
        std::cout << RED << "ClapTrap " << this->_name << " attacks " << target << ", causing " 
        << this->_attackDamage << " points of damage!" << RESET << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << RED << "ClapTrap " << this->_name << " has no energy points or hit points left!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_hitPoints -= amount;
    std::cout << RED << "ClapTrap " << this->_name << " took " << amount << " of damage!" << RESET << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_hitPoints += amount;
        std::cout << GREEN << "ClapTrap " << this->_name << " repaired itself + " << amount << " hit points back!" << RESET <<std::endl;
        this->_energyPoints--;
    }
    else
    {
        std::cout << RED << "ClapTrap " << this->_name << " has no energy points or hit points left!" << RESET << std::endl;
    }
}





std::string ClapTrap::getName() const
{
    return (this->_name);
}

int ClapTrap::getHitPoints() const
{
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
    return (this->_energyPoints);
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
    this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
    this->_energyPoints = energyPoints;
}
