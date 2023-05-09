/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:55:49 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/08 21:20:02 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"


Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
{
}
const std::string Weapon::getType() const
{
    return (this->type);
}
void Weapon::setType(std::string type)
{
    this->type = type;
}
