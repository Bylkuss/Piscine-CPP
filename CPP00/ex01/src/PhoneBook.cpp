/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:50:43 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/05 10:08:54 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "PhoneBook constructor called." << std::endl;
}

// PhoneBook::PhoneBook(const std::string name, size_t age)
// {
//     this->_name = name;
//     this->_age = age;
//     std::cout << "PhoneBook constructor called." << std::endl;
// }

PhoneBook::PhoneBook(const std::string name, size_t age): _name(name), _age(age)
{
    std::cout << "PhoneBook constructor called." << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout <<  std::endl << "PhoneBook destructor called." << std::endl;
}

void   PhoneBook::introduce()
{
    std::cout << "Azul fell-ak a " + this->_name << std::endl;
    std::cout << "Tes3id " << this->_age << " iseggasen" << std::endl;
}

void   PhoneBook::introduce(std::string name)
{
    std::cout << "Azul fell-ak a " + name << std::endl;
}

void   PhoneBook::introduce(std::string name, size_t age)
{
    std::cout << "Azul fell-ak a " + name << std::endl;
    std::cout << "Tes3id " << age << " iseggasen" << std::endl;
}



const std::string PhoneBook::getName() const
{
    return this->_name;
}

void PhoneBook::setName(std::string name)
{
    this->_name = name;
}

std::string getFullName(std::string input)
{
    std::string num;
    std::string name;
    
    std::cout << "Sekcem-d isem-ik/im: ";
        std::getline(std::cin, input);
        while(!checkName(input))
        {
                std::cout << "Wrong name format! Please try again: ";
                std::getline(std::cin, input);
        }
        return input;
}

std::string getPhoneNb(std::string input)
{
    std::string num;
    std::string name;

    std::cout << "Sekcem-d utun-ik/im: ";
        std::getline(std::cin, input);
        while(!checkPhoneNb(input))
        {
                std::cout << "Wrong number format!\nPlease enter only digits: ";
                std::getline(std::cin, input);
        }
        return input;
}
