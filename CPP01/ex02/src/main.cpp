/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:00:44 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/09 08:42:22 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    
    std::cout << std::endl;
    std::cout << "/***************** Memory addresses ********************\\" << std::endl;
    std::cout << "| Memory address of the string variable: " << &str;
    std::cout << " |\n| Memory address held by stringPTR:      " << ptr;
    std::cout << " |\n| Memory address held by stringREF:      " << &ref << " |" << std::endl;
    
    std::cout << std::endl;

    std::cout << "/******************* String values *********************\\" << std::endl;
    std::cout << "| Value of the string variable:        " << str;
    std::cout << " |\n| Value pointed to by stringPTR:       " << *ptr;
    std::cout << " |\n| Value value pointed to by stringREF: " << ref << " |" << std::endl;
    std::cout << std::endl;
}
