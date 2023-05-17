/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:00:26 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/17 13:22:29 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:          //protected so that ScavTrap can inherit (alternative to private)
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
        
        
    public:
        /*Orthodox Canonical Form*/
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &assigned);
        ~ClapTrap();
        
        /*Getters + Setters*/
        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        
        void setName(std::string name);
        void setHitPoints(int hitPoints);
        void setEnergyPoints(int energyPoints);
        
        
        /*Member functions*/
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

/********COLORS*********/
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[3;33m"



#endif