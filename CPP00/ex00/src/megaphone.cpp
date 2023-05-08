/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:53:50 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/04 11:10:47 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/megaphone.hpp"

int	main(int argc, char *argv[])
{
	std::string input;
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			input = argv[i];
			for (int j = 0; input[j] != '\0'; j++)
				std::cout << (unsigned char)toupper(input[j]);
			/* if (argv[i + 1])
					std::cout << ' '; */
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
