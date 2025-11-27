/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:32:13 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/26 16:23:23 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
    public:
        
        //[COMMENT OUT]
        enum Ctor {
            Default = 0,
            Copy
        };
    
        Fixed(void);
        Fixed(const Fixed &other);
        ~Fixed(void);
        Fixed &operator=(const Fixed &other);
        int getRawBits(void) const;
        void setRawBits(int const raw);
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
        
        //[COMMENT OUT]
        Ctor ctor_;
};

#endif

