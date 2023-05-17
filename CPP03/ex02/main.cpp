/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:13:24 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/17 12:18:32 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout <<std::endl << "-------------------------CASE1-------------------------" << std::endl;
    {
        FragTrap frag("Frag");
        frag.attack("target");
        frag.takeDamage(5);
        frag.beRepaired(5);
        frag.highFivesGuys();
    }
    std::cout <<std::endl << "-------------------------CASE2-------------------------" << std::endl;
    {
        ClapTrap clapTrap("Generic ClapTrap");
        FragTrap fragTrap("FragTrap");
        fragTrap.highFivesGuys(); // FragTrap's highFivesGuys() is called
        // clapTrap.highFivesGuys(); // Error: highFivesGuys() is a member of FragTrap, not ClapTrap
    }
    std::cout <<std::endl << "-------------------------CASE3-------------------------" << std::endl;
    {
        FragTrap fragTrap("FragTrap");
        fragTrap.attack("Enemy 2");
        fragTrap.highFivesGuys();
    }
    std::cout <<std::endl << "-------------------------CASE4-------------------------" << std::endl;
    {
        ClapTrap clapTrap1("ClapTrap1");
        clapTrap1.attack("Enemy 1");
        clapTrap1.takeDamage(50);
        clapTrap1.beRepaired(20);
    }

    std::cout <<std::endl << "-------------------------CASE5-------------------------" << std::endl;
    {
        ClapTrap clapTrap2("ClapTrap2");
        clapTrap2.attack("Enemy 2");
        clapTrap2.takeDamage(70);
        clapTrap2.beRepaired(10);
    }

    std::cout <<std::endl << "-------------------------CASE6-------------------------" << std::endl;
    {
        // Test FragTrap class
        FragTrap fragTrap1("FragTrap1");
        fragTrap1.attack("Enemy 3");
        fragTrap1.takeDamage(80);
        fragTrap1.beRepaired(15);
        fragTrap1.highFivesGuys();
    }

    std::cout <<std::endl << "-------------------------CASE7-------------------------" << std::endl;
    {
        FragTrap fragTrap2("FragTrap2");
        fragTrap2.attack("Enemy 4");
        fragTrap2.takeDamage(30);
        fragTrap2.beRepaired(25);
        fragTrap2.highFivesGuys();
    }
    std::cout <<std::endl << "-------------------------CASE8-------------------------" << std::endl;
    {
        // Test scenarios where no one can attack if there are no more energy points or hit points
        FragTrap fragTrap3("FragTrap3");
        fragTrap3.takeDamage(120);   // FragTrap3's hit points will become 0
        fragTrap3.attack("Enemy 5"); // No attack as there are no hit points left
    }
    std::cout <<std::endl << "-------------------------CASE9-------------------------" << std::endl;
    {
        ClapTrap clapTrap3("ClapTrap3");
        clapTrap3.beRepaired(100);   // ClapTrap3's hit points will become 100
        clapTrap3.attack("Enemy 6"); // Attack successful as there are sufficient hit points
    }
    std::cout <<std::endl << "-------------------------ENOUGH!-------------------------" << std::endl;

    return 0;
}