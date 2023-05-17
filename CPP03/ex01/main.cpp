/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:13:24 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/17 10:38:58 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << RED << "**********TODO more tests!********" << RESET << std::endl << std::endl << std::endl;
    ClapTrap clapTrap;
    ClapTrap clapTrap2("Bob");

    clapTrap.attack("bad guy");
    clapTrap2.attack("bad guy");
    clapTrap2.takeDamage(3);
    clapTrap2.beRepaired(1);

    std::cout << std::endl;
    
    ScavTrap scavTrap;
    ScavTrap scavTrap2("John");

    scavTrap.attack("bad guy");
    clapTrap2.attack("bad guy");
    scavTrap2.guardGate();

    return 0;
}