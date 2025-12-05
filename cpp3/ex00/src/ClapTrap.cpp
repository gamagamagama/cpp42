/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:58:00 by mgavorni          #+#    #+#             */
/*   Updated: 2025/12/05 13:00:15 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Colors.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << CYAN << "ClapTrap constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}


void    ClapTrap::attack(const std::string &target) {

    if (_energyPoints <= 0 && _hitPoints > 0)
            _energyPoints = 0;
    if (_energyPoints == 0 && _hitPoints > 0)
        std::cout << GRAY <<"Not enough energy to attack"<< RESET << std::endl;
    else if (_hitPoints <= 0)
        std::cout << BGRAY <<"ClapTrap " << _name << " is dead and cannot attack" << RESET << std::endl;
    else
    {
        _energyPoints--;
        std::cout << RED << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << " EP: " << _energyPoints << RESET << std::endl;

    }
    std::cout << std::endl;
}    


void    ClapTrap::beRepaired(unsigned int amount) {

    if(static_cast<int>(amount) < 0)
        amount = 0;
    if (_energyPoints > 0 && _hitPoints > 0) 
    {
        _energyPoints--;
        _hitPoints += amount;
        if (_hitPoints > 10)
            _hitPoints = 10;
        std::cout << BGREEN << "ClapTrap " << _name << " repairs +" << amount << "HP" << ". Currently at " << _hitPoints << "HP. And " << _energyPoints << "EP"<< RESET << std::endl;
    }
    else if (_energyPoints <= 0 && _hitPoints > 0)
    {
        if(_energyPoints < 0)
            _energyPoints = 0;
        std::cout << GRAY <<"Not enough energy to repair"<< RESET << std::endl;
    }
    else
        std::cout << BGRAY <<"ClapTrap " << _name << " is dead and cannot be repaired"<< RESET << std::endl;
    std::cout << std::endl;

}

void    ClapTrap::takeDamage(unsigned int amount) {
    if(static_cast<int>(amount) < 0)
        amount = 0;
    _hitPoints -= amount;
    if (_hitPoints <= 0 )
        _hitPoints = 0;
    std::cout << BMAGENTA <<"ClapTrap " << _name << " gains " << amount << " damage and is currently at " << _hitPoints << "HP."<< RESET << std::endl;
    std::cout << std::endl;
}
