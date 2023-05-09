/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:34:12 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/08 20:19:02 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		const std::string	&get_name() const;
		void				set_name(std::string name);
		void				announce();
	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);


/*****UTILS******/
int checkInput(std::string input);

#endif