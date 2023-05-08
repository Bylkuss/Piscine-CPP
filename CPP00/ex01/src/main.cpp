/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:25:18 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/08 12:49:58 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int	main(void)
{
	PhoneBook phoneBook;
	std::string userInput = "";

	while (true)
	{
		phoneBook.prompt();
		std::cout << COLOR_GREEN;
		std::getline(std::cin, userInput);
		std::cout << COLOR_DEFAULT;
		if (!userInput.compare("ADD"))
			phoneBook.add();
		else if (!userInput.compare("SEARCH"))
			phoneBook.search();
		else if (!userInput.compare("EXIT"))
			break ;
		else
			std::cout << COLOR_RED << "Invalid command!\n"
						<< COLOR_DEFAULT;
	}

	return (0);
}