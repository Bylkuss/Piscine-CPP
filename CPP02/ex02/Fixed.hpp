/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:08:40 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/16 15:26:31 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _nb;
        static const int _bits = 8;
    public:
        /*CONSTRUCTORS AND DESTRUCTOR*/
        Fixed();
        Fixed(int nb);
        Fixed(float nb);
        Fixed(Fixed const &copy);                           // Copy constructor
        Fixed &operator=(Fixed const &assigned);            // Copy assignment operator
        ~Fixed();
        /*SWITCHING.TO FUNCTIONS*/
        float		toFloat(void) const;
        int			toInt(void) const;
        /*GETTERS AND SETTERS*/
        int         getRawBits( void ) const;
        void        setRawBits(const int raw);
        /*COPARISON OPERATORS*/
        bool		operator>(const Fixed &rhs) const;
        bool		operator<(const Fixed &rhs) const;
        bool		operator>=(const Fixed &rhs) const;
        bool		operator<=(const Fixed &rhs) const;
        bool		operator==(const Fixed &rhs) const;
        bool		operator!=(const Fixed &rhs) const;
        /*ARITHMETIC OPERATORS*/
        Fixed		operator+(const Fixed &rhs);
        Fixed		operator-(const Fixed &rhs);
        Fixed		operator*(const Fixed &rhs);
        Fixed		operator/(const Fixed &rhs);
        /*INCREMENT/DECREMENT*/
        Fixed       &operator++(void);
        Fixed       &operator--(void);
        Fixed		operator++(int);
        Fixed		operator--(int);
        /*MAX - MIN MEMBER FUNCTIONS*/
        static Fixed 			&min(Fixed &val1, Fixed &val2);
        static Fixed 			&max(Fixed &val1, Fixed &val2);
        static const Fixed      &min(const Fixed &val1, const Fixed &val2);
        static const Fixed      &max(const Fixed &val1, const Fixed &val2);
};
/***PROTOTYPES*/
std::ostream &operator<<(std::ostream &out, const Fixed &fixe);




/********COLORS*********/
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"


#endif
