/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:57:56 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/19 11:40:17 by loadjou          ###   ########.fr       */
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
		std::cout << std::setw(30) << std::left << copy.getBrain()->getIdea(i);
		std::cout << std::setw(30) << std::left << ((Cat *)animals[0])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < nb; i++)
	{
		delete animals[i];
	}
	return (0);
}

#include <iostream>
#include <string>

int copyTest()
{
	// Test if a copy is deep or shallow
	Dog d1("Max");
	Dog d2 = d1;
	int nb = 5;

	if (d1.getType() == d2.getType())
		std::cout << std::endl
				  << "The copy is shallow :(" << std::endl
				  << std::endl;
	else
		std::cout << std::endl
				  << "The copy is deep :)" << std::endl
				  << std::endl;

	// Creating and deleting an array of Animal objects
	Animal *animals[nb];
	for (int i = 0; i < nb; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog("Dog " + std::to_string(i));
		else
			animals[i] = new Cat("Cat " + std::to_string(i));
	}

	for (int i = 0; i < nb; i++)
	{
		std::cout << animals[i]->getType() << std::endl;
		delete animals[i];
	}

	return 0;
}

int main(void)
{
	// 	testAnimal();
	copyTest();
	// test_wrong_animals();
	return (0);
}