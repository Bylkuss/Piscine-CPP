/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:45:21 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/16 12:18:59 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _nb;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(int nb);
        ~Fixed();
        Fixed(Fixed const &copy);                    // Copy constructor
        Fixed& operator=(Fixed const &assigned);         // Copy assignment operator
        
        int getRawBits( void ) const;
        void setRawBits(const int raw);
};




/********COLORS*********/
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"


#endif
