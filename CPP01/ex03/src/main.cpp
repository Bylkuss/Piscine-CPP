/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:40:09 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/10 14:06:46 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"

int	main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		std::cout << BBLUE << "*Reseting Weapon type*" << RESET << std::endl;
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << "----------------------  ";
	std::cout << "----------------------" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		std::cout << BBLUE << "*Reseting Weapon type*" << RESET << std::endl;
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}