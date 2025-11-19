/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:17:11 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/14 15:23:35 by mgavorni         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}
Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
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

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = num << Fixed::_fractionalBits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(num * (1 << Fixed::_fractionalBits));
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