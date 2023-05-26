/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:36:04 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/26 18:12:39 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    public:
        Cat();
        Cat(std::string type);  
        Cat(const Cat &copy);
        Cat &operator=(const Cat &src);
        virtual ~Cat();
        
        virtual void makeSound() const;
        Brain *getBrain() const;
    private:
        Brain *_brain;
};

#endif