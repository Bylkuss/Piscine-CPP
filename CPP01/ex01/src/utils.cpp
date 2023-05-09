/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:42:02 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/08 18:47:27 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int checkInput(std::string input)
{
    int N;
    
    N = 0;
    for (size_t i = 0; i < input.size(); i++)
    {
        if(!isdigit(input[i]))
        {
            std::cout << "Bad input!" << std::endl;
            return 0;
        }
    }
    N = std::stoi(input);
    return N;
}
