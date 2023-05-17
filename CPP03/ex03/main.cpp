/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:13:24 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/17 15:38:03 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::cout << std::endl
              << "-------------------------CASE1-------------------------" << std::endl;
    {
        DiamondTrap diamondTrap("MyDiamondTrap");
        DiamondTrap diamondTrap2("MyDiamondTrap2");
        // Access inherited members from ClapTrap
        diamondTrap.attack("Enemy");
        diamondTrap.takeDamage(50);
        diamondTrap.beRepaired(20);
        // Access unique member function of DiamondTrap
        diamondTrap.whoAmI();
        // Access unique member function of ScavTrap
        diamondTrap.guardGate();
        // Access unique member function of FragTrap
        diamondTrap.highFivesGuys();
    }

    std::cout << std::endl
              << "-------------------------CASE2-------------------------" << std::endl;
    {
        ClapTrap clapTrap("Clappy");
        clapTrap.attack("Enemy");
        clapTrap.takeDamage(20);
        clapTrap.beRepaired(10);
    }
    std::cout << std::endl
              << "-------------------------CASE3-------------------------" << std::endl;
    {
        ScavTrap scavTrap("Scavy");
        scavTrap.attack("Enemy");
        scavTrap.guardGate();
        scavTrap.takeDamage(30);
        scavTrap.beRepaired(15);
    }
    std::cout << std::endl
              << "-------------------------CASE4-------------------------" << std::endl;
    {
        // case that no attack or reparation allowed
        ScavTrap scavTrap("Scavy");
        scavTrap.guardGate();
        scavTrap.takeDamage(300);
        scavTrap.attack("Enemy");
        scavTrap.beRepaired(15);
    }

    std::cout << std::endl
              << "-------------------------CASE5-------------------------" << std::endl;
    {
        DiamondTrap diamondTrap("Diamond");
        diamondTrap.attack("Enemy");
        diamondTrap.guardGate();
        diamondTrap.highFivesGuys();
        diamondTrap.takeDamage(35);
        diamondTrap.beRepaired(20);
    }
    std::cout << std::endl << "-------------------------ENOUGH!-------------------------" << std::endl;
    return 0;
}