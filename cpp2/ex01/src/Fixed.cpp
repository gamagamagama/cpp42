/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:17:11 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/26 16:44:27 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Colors.hpp"

//[COMMENT OUT]
int Fixed::next_id_ = 0;

Fixed::Fixed(void) :  ctor_(Default) //[COMMENT OUT]
{
    id_ = next_id_++; //[COMMENT OUT]
    std::cout << RED << "ID: " << id_ << std::endl << "Default constructor called"<< RESET << std::endl;
    std::cout << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &other) : ctor_(Copy) //[COMMENT OUT]
{
    id_ = next_id_++; //[COMMENT OUT]
    std::cout << YELLOW << "ID: " << id_ << std::endl << "Copy constructor called"<< RESET << std::endl;
    std::cout << std::endl;
    this->_fixedPointValue = other._fixedPointValue;
}

Fixed::~Fixed(void)
{
    std::cout << MAGENTA << "Destructor called"<< RESET << std::endl;
    
    
    //[COMMENT OUT]
    switch (ctor_) {
            case Default:   std::cout << RED << "ID: " << id_ << std::endl << "Default Constructor\n"<< RESET << std::endl; break;
            case Copy:   std::cout << YELLOW << "ID: " << id_ << std::endl << "Copy Constructor\n" << RESET << std::endl; break;
            case INT:   std::cout << CYAN << "ID: " << id_ << std::endl << "Int Constructor\n" << RESET << std::endl; break;
            case FLOAT:   std::cout << BLUE << "ID: " << id_ << std::endl << "Float Constructor\n" << RESET << std::endl; break;
        }
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << GREEN <<"Copy assignment operator called"<< RESET << std::endl;
    std::cout << std::endl;
    this->_fixedPointValue = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    std::cout << std::endl;
    return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    std::cout << std::endl;
    this->_fixedPointValue = raw;
}

Fixed::Fixed(const int num)
{
    id_ = next_id_++; //[COMMENT OUT]
    std::cout << CYAN << "ID: " << id_ << std::endl << "Int constructor called"<< RESET << std::endl;
    std::cout << std::endl;
    this->_fixedPointValue = num << Fixed::_fractionalBits;
    this->ctor_ = INT; //[COMMENT OUT]
}

Fixed::Fixed(const float num)
{
    id_ = next_id_++; //[COMMENT OUT]
    std::cout << BLUE << "ID: " << id_ << std::endl << "Float constructor called"<< RESET << std::endl;
    std::cout << std::endl;
    this->_fixedPointValue = roundf(num * (1 << Fixed::_fractionalBits));
    this->ctor_ = FLOAT; //[COMMENT OUT]
}

float Fixed::toFloat(void) const
{
    return ((float)this->_fixedPointValue / (1 << Fixed::_fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->_fixedPointValue >> Fixed::_fractionalBits);
}

std::ostream &operator<<(std::ostream &o, const Fixed &rightside)
{
    o << rightside.toFloat();
    return (o);
}