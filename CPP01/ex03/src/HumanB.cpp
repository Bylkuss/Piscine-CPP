/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 08:52:45 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/09 18:39:03 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string _name) : _name(_name)
{
    this->_type = NULL;
}

HumanB::~HumanB()
{
}
Weapon const& HumanB::getWeapon()
{
    return *_type;
}

void HumanB::setWeapon(Weapon &Weapon)
{
    this->_type = &Weapon;
}

void HumanB::attack(void)
{
    if(!_type)
        std::cout << this->_name << " can't attack " << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_type->getType() << std::endl;
}