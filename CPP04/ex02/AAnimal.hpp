/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:59:01 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/26 18:18:01 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal &copy);
        AAnimal &operator=(const AAnimal &src);
        virtual ~AAnimal();

        void setType(std::string type);
        std::string getType() const;
        virtual void makeSound() const = 0;
        
};

/********COLORS*********/
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[3;33m"


#endif