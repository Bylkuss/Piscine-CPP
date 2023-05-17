/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:00:04 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/16 16:55:58 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
    private:
        Fixed x;
        Fixed y;
    public:
        Point();
        Point(Fixed x, Fixed y);
        Point(Point const &copy);                           // Copy constructor
        Point &operator=(Point const &assigned);            // Copy assignment operator
        ~Point();
        
        const Point operator-(const Point& other) const;
        const Fixed& getX() const;
        const Fixed& getY() const;

    
};


/********COLORS*********/
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"


#endif