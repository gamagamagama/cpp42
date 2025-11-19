/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:35:42 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 13:37:52 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain()) {
    std::cout << "Cat default constructor" << std::endl;
}
Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor" << std::endl;
    if(other._brain)
        _brain = new Brain(*other._brain);
    else
        _brain = new Brain();
    this->_type = other._type;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat copy assignment operator" << std::endl;
    if (this != &other)
    {
        delete _brain;
        _brain = new Brain(*other._brain);
        this->_type = other._type;
    }
    return *this;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow Ave Satan" << std::endl;
}

