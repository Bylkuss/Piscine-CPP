/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:13:24 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/17 10:10:21 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	{
		ClapTrap clapTrap("First");
		ClapTrap clapTrap2(clapTrap);
		ClapTrap clapTrap3;
		clapTrap3 = clapTrap2;
		clapTrap.attack("target");
		clapTrap.takeDamage(10);
		clapTrap.beRepaired(10);
	}
	std::cout << std::endl << "Dave - Mathieu" << std::endl;
	{
		ClapTrap clap("Dave");
        clap.takeDamage(10);
		clap.attack("Mathieu");
		clap.beRepaired(3);
	}
	std::cout << std::endl << "John - Jay" << std::endl;
	{
		ClapTrap clap("John");
		clap.attack("Jay");
		clap.beRepaired(3);
	}
    
	return (0);
}