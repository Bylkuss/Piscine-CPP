/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:43:37 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/09 10:43:45 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

#include "../inc/Weapon.hpp"
#include <string>

class HumanB
{
    private:
        Weapon _type;
        std::string _name;
    public:
        HumanB();
        HumanB(std::string _name);
        ~HumanB();

        void attack(void);
};


#endif