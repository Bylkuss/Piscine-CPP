/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:13:27 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/04 15:50:52 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

Contact::Contact()
{
    std::cout << "Contact constructor called" << std::endl;
}
Contact::~Contact()
{
    std::cout << "Contact destructor called" << std::endl;
}






const std::string Contact::getFirstName()
{
    return this->_firstName;    
}
void Contact::setFirstName(std::string _firstName)
{
    this->_firstName = _firstName;
}







const std::string Contact::getLastName()
{
    return this->_lastName;    
}
void Contact::setLastName(std::string _lastName)
{
    this->_firstName = _lastName;
}






const std::string Contact::getNickname()
{
    return this->_nickname;
}

void Contact::setNickname(std::string _nickname)
{
    this->_nickname = _nickname;
}







const std::string Contact::getPhoneNb()
{
    return this->_phoneNb;
}

void Contact::setPhoneNb(std::string _phoneNb)
{
    this->_phoneNb = _phoneNb;
}







const std::string Contact::getDarkestSecret()
{
    return this->_darkestSecret;
}
void    Contact::setDarkestSecret(std::string _darkestSecret)
{
    this->_darkestSecret = _darkestSecret;
}


bool checkPhoneNb(std::string input)
{
    for (size_t i = 0; i < input.size(); i++)
    {
        if(!isdigit(input[i]))
            return false;
    }
    return true;
}

bool checkName(std::string input)
{
    for (size_t i = 0; i < input.size(); i++)
    {
        if(!isalpha(input[i]) && !iswspace(input[i]))
            return false;
    }
    return true;
}
