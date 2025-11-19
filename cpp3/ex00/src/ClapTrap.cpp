/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:58:00 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/18 18:15:35 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}


void    ClapTrap::attack(const std::string &target) {

    if (_energyPoints == 0 && _hitPoints > 0)
        std::cout << "Not enough energy to attack" << std::endl;
    else if (_hitPoints <= 0)
        std::cout << "ClapTrap " << _name << " is dead and cannot attack" << std::endl;
    else
    {
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << " EP: " << _energyPoints << std::endl;

    }
}    


void    ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        _energyPoints--;
        _hitPoints += amount;
        if (_hitPoints > 10)
            _hitPoints = 10;
        std::cout << "ClapTrap " << _name << " repairs + " << amount << "HP" << ". Currently at " << _hitPoints << "HP. And " << _energyPoints << "EP" << std::endl;
    }
    else if (_energyPoints == 0 && _hitPoints > 0)
        std::cout << "Not enough energy to repair" << std::endl;
    else
        std::cout << "ClapTrap " << _name << " is dead and cannot be repaired" << std::endl;

}

void    ClapTrap::takeDamage(unsigned int amount) {
    _hitPoints -= amount;
    if (_hitPoints <= 0)
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " lost " << amount << " damage and is currently at " << _hitPoints << "HP." << std::endl;
}