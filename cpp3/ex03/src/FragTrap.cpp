/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 09:50:42 by mgavorni          #+#    #+#             */
/*   Updated: 2025/12/05 16:04:25 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "(constructor) FragTrap DEFAULT constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "(constructor) FragTrap constructor called" << std::endl;
    this->_hitPoints = 200;
    this->_energyPoints = 200;
    this->_attackDamage = 200;
}
FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
    std::cout << "(constructor) FragTrap COPY constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "(assignment) FragTrap assignment operator called" << std::endl;
    if(this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "(destructor) FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High fives" << std::endl;
}

