/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:17:11 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/18 13:44:30 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
   // std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}
Fixed::Fixed(const Fixed &other)
{
   // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}
Fixed::~Fixed(void)
{
   // std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
   // std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointValue = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
   // std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
   // std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

Fixed::Fixed(const int num)
{
   // std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = num << Fixed::_fractionalBits;
}

Fixed::Fixed(const float num)
{
   // std::cout << "Float constructor called" << std::endl;
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

bool Fixed::operator>(const Fixed &other) const
{
    return (this->_fixedPointValue > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->_fixedPointValue < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (this->_fixedPointValue >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (this->_fixedPointValue <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
    return (this->_fixedPointValue == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (this->_fixedPointValue != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other)
{
    Fixed result;
    result.setRawBits(this->_fixedPointValue + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &other)
{
    Fixed result;
    result.setRawBits(this->_fixedPointValue - other.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &other)
{
    Fixed result;
    result.setRawBits((this->_fixedPointValue * other.getRawBits()) >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed &other)
{
    Fixed result;
    if(other.getRawBits() == 0)
        result.setRawBits(0);
    else
        result.setRawBits((this->_fixedPointValue << _fractionalBits) / other.getRawBits());
    return result;
}

Fixed &Fixed::operator++(void)
{
    this->_fixedPointValue++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->_fixedPointValue++;
    return (tmp);
}

Fixed &Fixed::operator--(void)
{
    this->_fixedPointValue--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->_fixedPointValue--;
    return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}
