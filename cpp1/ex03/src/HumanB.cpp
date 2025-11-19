/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:07:52 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/13 18:21:01 by mgavorni         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    return;
}

HumanB::~HumanB() {}

void HumanB::attack() {
    if(this->weapon == NULL)
    {
        std::cout << this->name << " fists you hard" << std::endl;
        return ;
    }
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& w) {
    weapon = &w;
}

