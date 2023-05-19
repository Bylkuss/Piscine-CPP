/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:57:56 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/18 17:16:04 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << std::endl << "-----------------------GENERAL-----------------------" << std::endl;
    {
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();      // will output the cat sound!
        j->makeSound();      // will output the dog sound!
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }

    std::cout << std::endl << "-------------------------DOG-------------------------" << std::endl;
    {
        Animal *Animal;
        Dog dog;

        Animal = &dog;
        std::cout << "Animal type: " << Animal->getType() << std::endl;
        Animal->makeSound(); // Outputs: "Dog barks"
    }
    std::cout << std::endl << "-------------------------CAT-------------------------" << std::endl;
    {
        Animal *animal;
        Cat cat;

        animal = &cat;
        std::cout << "Animal type: " << animal->getType() << std::endl;
        animal->makeSound(); // Outputs: "Cat meows"
    }
    std::cout << std::endl << "-----------------------WrongAnimal-----------------------" << std::endl;
    {
        WrongAnimal *WrongAnimal;
        WrongCat WrongCat;
        
        WrongAnimal = &WrongCat;
        std::cout << "WrongAnimal type: " << WrongAnimal->getType() << std::endl;
        WrongAnimal->makeSound(); // Outputs: "WrongAnimal sound"
    }
    return 0;
}