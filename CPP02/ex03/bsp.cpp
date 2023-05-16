/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:07:21 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/16 16:43:47 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Point v0 = c - a;
    Point v1 = b - a;
    Point v2 = point - a;

    Fixed dot00 = v0.getX() * v0.getX() + v0.getY() * v0.getY();
    Fixed dot01 = v0.getX() * v1.getX() + v0.getY() * v1.getY();
    Fixed dot02 = v0.getX() * v2.getX() + v0.getY() * v2.getY();
    Fixed dot11 = v1.getX() * v1.getX() + v1.getY() * v1.getY();
    Fixed dot12 = v1.getX() * v2.getX() + v1.getY() * v2.getY();

    Fixed invDenom = Fixed(1) / (dot00 * dot11 - dot01 * dot01);
    Fixed u = (dot11 * dot02 - dot01 * dot12) * invDenom;
    Fixed v = (dot00 * dot12 - dot01 * dot02) * invDenom;

    return (u > Fixed(0)) && (v > Fixed(0)) && (u + v < Fixed(1));
}
