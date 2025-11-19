/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:03:49 by mgavornik         #+#    #+#             */
/*   Updated: 2025/11/13 16:27:38 by mgavorni         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
