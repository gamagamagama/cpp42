/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:46:45 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/13 18:01:57 by mgavorni         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}
Weapon::~Weapon()
{
}
const std::string Weapon::getType() const
{
    return this->type;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}
