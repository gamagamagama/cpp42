/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:45:15 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/13 18:03:41 by mgavorni         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
class Weapon
{
    public:
        Weapon(const std::string type);
        ~Weapon();
        const std::string getType() const;
        void setType(std::string type);
    private:
        std::string type;
};

#endif
