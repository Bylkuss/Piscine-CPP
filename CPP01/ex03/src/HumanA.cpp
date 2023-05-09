/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:53:32 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/09 10:56:46 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/HumanA.hpp"

HumanA::HumanA()
{
}

HumanA::HumanA(std::string name, Weapon &type)
{    
    this->_name = name;
    this->_type = type;
}


HumanA::~HumanA()
{
}


void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}