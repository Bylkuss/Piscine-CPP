/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:22:47 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/08 19:58:26 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(int argc, char const *argv[])
{
    int N = 5;

    if(argc <= 2)
    {
        if(argv[1])
        {
            std::string inputString(argv[1]);
            N = checkInput(inputString);
        }
    }
    else
    {
        std::cout << "Bad args nb!" << std::endl;
        return 1;
    }
    Zombie *zombies = zombieHorde(N, "Zombie");
    delete [] zombies;
    return 0;
}
