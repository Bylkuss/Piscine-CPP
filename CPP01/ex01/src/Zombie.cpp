/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:35:18 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/08 19:49:30 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << _name << " is born" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " is dead" << std::endl;
}

const std::string &Zombie::get_name() const
{
    return (_name);
}
void Zombie::set_name(std::string name)
{
    this->_name = name;
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}