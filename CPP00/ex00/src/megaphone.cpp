/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:53:50 by loadjou           #+#    #+#             */
/*   Updated: 2023/04/24 12:30:52 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/megaphone.hpp"

int	main(int argc, char *argv[])
{
	char	*str;

	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			str = argv[i];
			for (int j = 0; str[j] != '\0'; j++)
				std::cout << (unsigned char)toupper(str[j]);
			if (argv[i + 1])
					std::cout << ' ';
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
