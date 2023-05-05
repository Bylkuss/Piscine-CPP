/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:25:18 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/04 16:24:25 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"



int main()
{
    
    // Copy.setName("Zubir");
    
    // std::string name = Copy.getName();
    // size_t age = 18;

    // name.at(0) = 'V';
    // std::cout << "New name: " << name << std::endl;

    // // Copy.setName("Zubir wis 2");

    // // Copy.introduce(name);
    // Copy.introduce(name, age);
    // std::cout << Copy.getName() << std::endl;
    // Copy.title = "Azwel";
    // Copy._name = "Isem";
    
    // std::cout << Copy.title << std::endl;
    // std::cout << Copy._name << std::endl;
    // PhoneBook book("Lwennas", 22);
    
    // book.introduce();

    Contact user;


    std::string num;
    std::string name;
    std::string input;
    std::cout << std::endl;
    // std::cout << "Enter a number: ";
    // std::cin >> num;
    // std::cout << "Enter name: ";

    for(int i = -1; i < 0; i++)
    {
        num = user.getFirstName();
        user.setFirstName(getFullName(input));
        // num = user.getFirstName();
        // getFullName(input);
        getPhoneNb(input);
        
        
        
        // std::cout << "Azul a " << name  << " 😃" << std::endl << "Ad nemsawal: " << num << std::endl;
        
    }

    // while (std::getline(std::cin, input)){
    // }
    // std::cout << "You entered: " << name << " " << num << std::endl;
    
    return 0;
}
