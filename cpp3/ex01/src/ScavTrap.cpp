/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:46:29 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/18 19:33:36 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "(constructor) ScavTrap " << this->_name << " has been created" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << "\n hit points: " << this->_hitPoints <<"\n energy points: " << this->_energyPoints << "\n attack damage: " << this->_attackDamage << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "(destructor) ScavTrap " << this->_name << " has been destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hitPoints <= 0 || this->_energyPoints <= 0) {
        ClapTrap::attack(target);
        return;
    }
    std::cout << "ScavTrap " << this->_name << " hardly attacks " << target << ", dealing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}