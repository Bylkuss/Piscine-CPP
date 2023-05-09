/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:40:09 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/09 19:05:27 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"

int main()
{
    {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    // Weapon club2 = bob.getWeapon();
    // std::cout << "bob club address: " << &club << std::endl;
    // std::cout << "bob2 club address: " << &club << std::endl;
    club.setType("some other type of club");
    std::cout << "Type::::: " << club.getType() << std::endl;
    
    // club.setType("some other type of club");
    // std::cout << "*** Bob took another type and attacked ***" << std::endl;
    bob.attack();
}
// {
//     Weapon club = Weapon("crude spiked club");
//     HumanB jim("Jim");
//     jim.setWeapon(club);
//     jim.attack();
//     // std::cout << "*** jim took another type and attacked ***" << std::endl;
//     club.setType("some other type of club");
//     jim.attack();
// }
return 0;
}
