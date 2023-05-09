/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:53:32 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/09 18:58:40 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/HumanA.hpp"

HumanA::HumanA()
{
}

HumanA::HumanA(std::string name, Weapon &weapon)
{    
    this->_name = name;
    setWeapon(weapon);
    // this->_weapon = weapon;
}

HumanA::~HumanA()
{
}
const Weapon &HumanA::getWeapon() const
{
    return this->_weapon;
}

void HumanA::setWeapon(Weapon weapon)
{
    this->_weapon = weapon;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
