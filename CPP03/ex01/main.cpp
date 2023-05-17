/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:13:24 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/17 16:18:26 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clapTrap;
    ClapTrap clapTrap2("Bob");

    clapTrap.attack("bad guy");
    clapTrap2.attack("bad guy");
    clapTrap2.takeDamage(3);
    clapTrap2.beRepaired(10);
    std::cout << std::endl;

    ScavTrap scavTrap;
    ScavTrap scavTrap2("John");
    
    // demonstrate that damage points are kept between attacks
    scavTrap.attack("bad guy");
    scavTrap.attack("bad guy");
    scavTrap.attack("bad guy");
    
    
    clapTrap2.attack("bad guy");
    scavTrap2.guardGate();

    return 0;
}
