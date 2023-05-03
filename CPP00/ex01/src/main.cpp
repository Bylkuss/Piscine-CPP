/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:25:18 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/03 19:43:57 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int main()
{
    PhoneBook Copy;
    
    Copy.setName("Zubir");
    Copy.introduce(Copy.getName());
    // std::cout << Copy.getName() << std::endl;
    // Copy.title = "Azwel";
    // Copy._name = "Isem";
    
    // std::cout << Copy.title << std::endl;
    // std::cout << Copy._name << std::endl;
    return 0;
}
