/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:08:35 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/14 15:17:07 by mgavorni         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    public:
        Fixed(void);
        Fixed(const Fixed &other);
        ~Fixed(void);
        Fixed &operator=(const Fixed &other);
        Fixed(const int num);
        Fixed(const float num);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        float toFloat(void) const;
        int toInt(void) const;
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
        
};

std::ostream &operator<<(std::ostream &o, const Fixed &rightside);

#endif
