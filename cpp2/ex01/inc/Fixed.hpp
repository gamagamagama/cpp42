/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:08:35 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/26 16:31:19 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    public:
        //[COMMENT OUT]
        enum Ctor {
            Default = 0,
            Copy,
            INT,
            FLOAT
        };

    
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
        
        //[COMMENT OUT]
        Ctor ctor_;
        int id_;
        static int next_id_;
        
};

std::ostream &operator<<(std::ostream &o, const Fixed &rightside);

#endif
