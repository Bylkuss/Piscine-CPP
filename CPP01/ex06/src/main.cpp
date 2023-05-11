/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:17:05 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/11 19:46:16 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"
#include "../inc/utils.hpp"



int main(int argc, char **argv) {
    Harl Harl;
    
    if(argc != 2)
        msgError("Wrong args nb");
    std::string level = argv[1];
    Harl.complain(level);
    
    return 0;
}