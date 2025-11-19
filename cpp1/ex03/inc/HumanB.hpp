/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:07:59 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/13 18:01:47 by mgavorni         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon& weapon);
    private:
        std::string name;
        Weapon* weapon;
};

#endif