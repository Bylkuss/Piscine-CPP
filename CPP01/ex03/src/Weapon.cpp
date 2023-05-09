/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:55:49 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/09 10:43:01 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"


Weapon::Weapon(/* args */)
{
}
Weapon::Weapon(std::string _type) : _type(_type)
{    
}

Weapon::~Weapon()
{
}
const std::string Weapon::getWeapon() const
{
    return (this->_type);
}
void Weapon::setWeapon(std::string _type)
{
    this->_type = _type;
}
