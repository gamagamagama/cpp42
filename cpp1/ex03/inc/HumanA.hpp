/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:03:53 by mgavornik         #+#    #+#             */
/*   Updated: 2025/11/13 16:53:38 by mgavorni         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack();
    //    void setWeapon(Weapon& weapon);
    private:
        std::string name;
        Weapon& weapon;
};

#endif

