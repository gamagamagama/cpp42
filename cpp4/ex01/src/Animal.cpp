/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:32:44 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 10:42:02 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
    std::cout << "Animal type constructor called" << std::endl;
}

std::string Animal::getType() const
{
    std::cout << "Animal getType: "<<this->_type<<" called" << std::endl;
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << "wecome to the jungle" << std::endl;
}
