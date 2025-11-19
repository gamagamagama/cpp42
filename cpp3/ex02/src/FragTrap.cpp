/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 09:50:42 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 10:01:41 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "(constructor) FragTrap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "(destructor) FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High fives" << std::endl;
}

