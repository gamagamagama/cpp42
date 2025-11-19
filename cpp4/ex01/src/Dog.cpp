/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:39:11 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 13:29:55 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(const Dog& other): Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    if (other._brain)
        _brain = new Brain(*other._brain);
    else
        _brain = new Brain();
   this->_type = other._type;
}
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
    {
        delete _brain;
        _brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Hav Hav God Power" << std::endl;
}
