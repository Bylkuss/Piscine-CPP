/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:34:30 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/29 12:43:32 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    _type = type;
    std::cout << YELLOW << type << "Constructor called!" RESET << std::endl;
}
std::string const &AMateria::getType() const
{
    return this->_type;
}


