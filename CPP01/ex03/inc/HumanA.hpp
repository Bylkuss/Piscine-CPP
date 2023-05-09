/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:52:55 by loadjou           #+#    #+#             */
/*   Updated: 2023/05/09 19:03:03 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP

#include "../inc/Weapon.hpp"
#include <string>

class HumanA
{
    private:
        Weapon _weapon;
        std::string _name;
    public:
        HumanA();
        HumanA(std::string _name, Weapon &weapon);
        ~HumanA();

        void attack(void);
        const Weapon &getWeapon() const;
        void setWeapon(Weapon weapon);
};



#endif