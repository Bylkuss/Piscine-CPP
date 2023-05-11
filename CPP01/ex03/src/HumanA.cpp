/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:53:32 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/10 14:06:52 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	: _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

const Weapon &HumanA::getWeapon() const
{
	return (_weapon);
}

void HumanA::setWeapon(Weapon weapon)
{
	_weapon = weapon;
}

void HumanA::attack()
{
	std::cout << BGREEN << _name << " attacks with their " << _weapon.getType() << RESET << std::endl;
}