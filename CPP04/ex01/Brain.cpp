/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 08:53:03 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/19 11:15:22 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"
#include "Animal.hpp"


Brain::Brain()
{

	const std::string examples[] = {
		"I want to sleep",
		"I want food",
		"I want pets",
		"I want to go for a walk",
		"I want water",
		"I want a treat"
	};
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = examples[rand() % (sizeof(examples) / sizeof(std::string))];
    std::cout << YELLOW << "A Brain was born!" << RESET << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << YELLOW "Brain copy constructor called" RESET << std::endl;
		for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
    // *this = copy;
}
Brain &Brain::operator=(const Brain &src)
{
    std::cout << YELLOW "Brain assignation operator called" RESET << std::endl;
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i] = src._ideas[i];
        }
    }
    return (*this);
}
Brain::~Brain()
{
    
    std::cout << YELLOW << "A Brain died!" << RESET << std::endl;   
}


const std::string& Brain::getIdea(int index) const
{
    return (_ideas[index]);
}

void Brain::setIdea(int index, std::string idea)
{
    _ideas[index] = idea;
}