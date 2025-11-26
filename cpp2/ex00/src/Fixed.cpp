/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:32:17 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/26 15:04:20 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Colors.hpp"

Fixed::Fixed(void) : ctor_(Default)
{
    std::cout << RED <<"Default constructor called"<< RESET << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &other) : ctor_(Copy)
{
    std::cout << YELLOW << "Copy constructor called"<< RESET << std::endl;
    *this = other;
}

Fixed::~Fixed(void)
{
    std::cout << MAGENTA << "Destructor called"<< RESET << std::endl;
    switch (ctor_) {
            case Default:   std::cout<<RED << "Default Constructor\n"<< RESET; break;
            case Copy:   std::cout <<YELLOW<< "Copy Constructor\n" << RESET; break;
            case CopyAssignment:std::cout<<GREEN << "CopyAssignment operator\n"<< RESET; break;
            case MemberFunction1:std::cout << "MemberFunction1\n"; break;
            case MemberFunction2:std::cout << "MemberFunction2\n"; break;
        }
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << GREEN <<"Copy assignment operator called"<< RESET << std::endl;
    this->_fixedPointValue = other.getRawBits();
    this->ctor_ = CopyAssignment;
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
    this->ctor_ = MemberFunction2;
}

