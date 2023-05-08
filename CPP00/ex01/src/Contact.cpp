/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:13:27 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/08 13:06:06 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

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

Contact::Contact(void)
{
}

Contact::Contact(std::string &firstName,
				 std::string &lastName,
				 std::string &nickName,
				 std::string &phoneNumber,
				 std::string &darkestSecret)
	: firstName(firstName),
	  lastName(lastName),
	  nickName(nickName),
	  phoneNumber(phoneNumber),
	  darkestSecret(darkestSecret)
{
}

Contact::~Contact(void)
{
}

void Contact::setFirstName(std::string name)
{
	this->firstName = name;
}

std::string Contact::getFirstName(void) const
{
	return (this->firstName);
}

void Contact::setLastName(std::string name)
{
	this->lastName = name;
}

std::string Contact::getLastName(void) const
{
	return (this->lastName);
}

void Contact::setNickName(std::string name)
{
	this->nickName = name;
}

std::string Contact::getNickName(void) const
{
	return (this->nickName);
}

void Contact::setPhoneNumber(std::string number)
{
    this->phoneNumber = number;
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->phoneNumber);
}

void Contact::setDarkestSecret(std::string secret)
{
	this->darkestSecret = secret;
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->darkestSecret);
}