/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:32:17 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/26 16:18:08 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Colors.hpp"

Fixed::Fixed(void) :  ctor_(Default) //[COMMENT OUT]
{
    std::cout << RED <<"Default constructor called"<< RESET << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &other) : ctor_(Copy) //[COMMENT OUT]
{
    std::cout << YELLOW << "Copy constructor called"<< RESET << std::endl;
    this->_fixedPointValue = other._fixedPointValue;
}

Fixed::~Fixed(void)
{
    std::cout << MAGENTA << "Destructor called"<< RESET << std::endl;
    
    //[COMMENT OUT]
    switch (ctor_) {
            case Default:   std::cout<<RED << "Default Constructor\n"<< RESET << std::endl; break;
            case Copy:   std::cout <<YELLOW<< "Copy Constructor\n" << RESET << std::endl; break;
        }
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << GREEN <<"Copy assignment operator called"<< RESET << std::endl;
    this->_fixedPointValue = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

