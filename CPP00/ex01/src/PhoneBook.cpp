/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:50:43 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/03 19:42:38 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "PhoneBook constructor called." << std::endl;
}
PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook destructor called." << std::endl;
}


void   PhoneBook::introduce(std::string name)
{
    std::cout << "Azul fell-ak a " + name << std::endl;
}

const std::string PhoneBook::getName() const
{
    return this->_name;
}

void PhoneBook::setName(std::string name)
{
    this->_name = name;
}
