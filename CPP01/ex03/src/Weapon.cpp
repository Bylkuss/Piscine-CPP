/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:55:49 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/09 18:44:12 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(/* args */)
{
}
Weapon::Weapon(std::string _type) : _type(_type)
{
    std::cout << "Weapon instanciation with '" << _type << "' type." << std::endl;
}

Weapon::~Weapon()
{
}
std::string const &Weapon::getType()
{
    return (_type);
}
void Weapon::setType(std::string type)
{
    this->_type = type;
}
