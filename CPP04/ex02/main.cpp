/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:57:56 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/26 18:21:09 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
#include <iomanip>

void testAnimal(void)
{
	const AAnimal *doggy;
	const AAnimal *kitty;
	std::cout << std::endl;

	/* Should Return An Error because AAnimal can't be instatiable */
	
	// const AAnimal	*meta;
	// meta = new AAnimal();
	// std::cout << "Type of meta = " << meta->getType() << std::endl;
	// meta->makeSound(); // output: AAnimals make a generic sound.
	// delete			meta;

	doggy = new Dog();
	std::cout << std::endl;

	kitty = new Cat();
	std::cout << std::endl;

	std::cout << GREEN "Type of doggy = " << doggy->getType() << std::endl;
	std::cout << "Type of kitty = " << kitty->getType() << RESET << std::endl;
	std::cout << std::endl;

	doggy->makeSound(); // output: Dog barks
	kitty->makeSound(); // output: Cat meows
	std::cout << std::endl;

	delete doggy;
	std::cout << std::endl;

	delete kitty;
}

int main(void)
{
	testAnimal();
	return (0);
}