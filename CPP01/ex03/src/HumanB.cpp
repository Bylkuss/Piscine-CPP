/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:52:45 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/10 14:02:47 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB()
{
}

Weapon const&	HumanB::getWeapon()
{
	return (*_weapon);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (!_weapon)
		std::cout << BGREEN << _name << " attacks with nothing ... " << _name << " will die" << RESET << std::endl;
	else
		std::cout << BGREEN << _name << " attacks with their " << _weapon->getType() << RESET << std::endl;
}
