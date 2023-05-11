/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:02:27 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/11 19:51:18 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl(/* args */)
{
    
}
Harl::~Harl()
{
    
}
void Harl::debug(void)
{
	std::cout << BBLK << "[ DEBUG ]" << RESET << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::info(void)
{
	std::cout << BBLK << "[ INFO ]" << RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void Harl::warning(void)
{
	std::cout << BBLK << "[ WARNING ]" << RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been comingfor years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << BBLK << "[ ERROR ]" << RESET << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
	    
    void (Harl::*levels[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levelStrings[] = {"DEBUG", "INFO", "WARNING", "ERROR"};


    int index = -1;
    for (int i = 0; i < 4; i++)
    {
        if (level == levelStrings[i])
        {
            index = i;
            break;
        }
    }
	if(level.compare("DEBUG") && level.compare("INFO") && level.compare("WARNING") && level.compare("ERROR"))
	{
		std::cout << "Harl says: Invalid complaint level." << std::endl;
		return;
	}
    switch (index)
    {
    case 0:
        for (int i = index; i < 4; i++)
            (this->*levels[i])();
        break;
    case 1:
        for (int i = index; i < 4; i++)
            (this->*levels[i])();
        break;
    case 2:
        (this->*levels[2])();
        (this->*levels[3])();
        break;
    case 3:
        (this->*levels[3])();
        break;
    default:
        break;
    }
}