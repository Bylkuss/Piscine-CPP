/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:57:56 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/20 16:34:26 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
#include <iomanip>

int animalTest()
{
	int nb = 10;

	Animal *animals[nb];

	for (int i = 0; i < nb; i++)
	{
		if (i >= (nb / 2))
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	Cat copy(*(Cat *)animals[0]);
	std::cout << std::endl;
	for (int i = 0; i < nb; i++)
	{
		std::cout << GREEN << std::setw(30) << std::left << copy.getBrain()->getIdea(i);
		std::cout << std::setw(30) << std::left << ((Cat *)animals[0])->getBrain()->getIdea(i) << RESET << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < nb; i++)
	{
		delete animals[i];
	}
	return (0);
}

int copyTest()
{
	// Test if a copy is deep or shallow
	Dog d1("Max");
	// Dog d2 = d1;
	Dog d2(d1);
	// Dog d2;
	// int nb = 5;

	// d1.setType("Corgi");

	std::cout << "d1.getType(): " << d1.getType() << std::endl;
	// std::cout << "d2.getType(): " << d2.getType() << std::endl;
	// if (d1.getType() == d2.getType())
	// 	std::cout << std::endl
	// 			  << RED "The copy is shallow :(" RESET << std::endl
	// 			  << std::endl;
	// else
	// 	std::cout << std::endl
	// 			  << GREEN "The copy is deep :)" RESET << std::endl
	// 			  << std::endl;

	// Creating and deleting an array of Animal objects
	// Animal *animals[nb];
	// for (int i = 0; i < nb; i++)
	// {
	// 	if (i % 2 == 0)
	// 		animals[i] = new Dog("Dog " + std::to_string(i));
	// 	else
	// 		animals[i] = new Cat("Cat " + std::to_string(i));
	// }

	// for (int i = 0; i < nb; i++)
	// {
	// 	std::cout << animals[i]->getType() << std::endl;
	// 	delete animals[i];
	// }

	return 0;
}

int main(void)
{
	std::cout << std::endl
			  << "--------- Animal test ---------" << std::endl;
	{
		animalTest();
	}
	std::cout << std::endl
			  << "---------- Copy test ----------" << std::endl;
	{
		copyTest();
	}
	{
		std::cout << std::endl
				  << "---------- Leaks test ----------" << std::endl;
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		delete j; // should not create a leak
		delete i;
	}
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j; // should not create a leak
	delete i;
	return (0);
}