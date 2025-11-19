/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:28:09 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 15:53:53 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name() 
{
    std::cout << "Zombie created" << std::endl;
   
}
Zombie::~Zombie()
{
    std::cout << this->name << ": is fuckin no more walking dead" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::addName(std::string n)
{
	this->name = n;
}
