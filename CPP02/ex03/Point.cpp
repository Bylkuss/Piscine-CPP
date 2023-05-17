/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:00:45 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/16 16:56:09 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

Point::Point()  : x(0), y(0)
{   
}
Point::Point(Fixed x, Fixed y) : x(x), y(y)
{
}
Point::Point(Point const &copy)
{
    *this = copy;
}
Point& Point::operator=(Point const &assigned)
{
    if(this == &assigned)
        return *this;
    x = assigned.x;
    y = assigned.y;
    return *this;
}
Point::~Point()
{
}

const Fixed& Point::getX() const {
    return x;
}

const Fixed& Point::getY() const {
    return y;
}
