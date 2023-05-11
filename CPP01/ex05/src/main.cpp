/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:17:05 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/11 18:44:17 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(void) {
    Harl Harl;
    std::cout << BGREEN << "Case1---------------------------------------------DEBUG\n" << RESET;
    Harl.complain("DEBUG");
    std::cout << BGREEN << "Case2---------------------------------------------INFO\n" << RESET;
    Harl.complain("INFO");
    std::cout << BGREEN << "Case3---------------------------------------------WARNING\n" << RESET;
    Harl.complain("WARNING");
    std::cout << BGREEN << "Case4---------------------------------------------ERROR\n" << RESET;
    Harl.complain("ERROR");
    std::cout << BGREEN << "Case5---------------------------------------------INVALID\n" << RESET;
    Harl.complain("INVALID");
    return 0;
}