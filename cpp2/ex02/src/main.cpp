/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:08:21 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/18 13:53:10 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// int main( void ) {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) / Fixed( 0.2f ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;
// std::cout << Fixed::min( a, b ) << std::endl;

// return 0;
// }

#include "Fixed.hpp"
#include <iostream>

int main() {
    std::cout << "=== COMPARISON OPERATORS TESTS ===" << std::endl;
    
    Fixed a(5.5f);
    Fixed b(3.2f);
    Fixed c(5.5f);  // Same as a
    Fixed zero;     // Default (0)
    
    // operator>
    std::cout << "--- operator> ---" << std::endl;
    std::cout << "5.5 > 3.2: " << (a > b) << " (should be 1)" << std::endl;
    std::cout << "3.2 > 5.5: " << (b > a) << " (should be 0)" << std::endl;
    std::cout << "5.5 > 5.5: " << (a > c) << " (should be 0)" << std::endl;
    std::cout << "5.5 > 0: " << (a > zero) << " (should be 1)" << std::endl;
    
    // operator<
    std::cout << "--- operator< ---" << std::endl;
    std::cout << "3.2 < 5.5: " << (b < a) << " (should be 1)" << std::endl;
    std::cout << "5.5 < 3.2: " << (a < b) << " (should be 0)" << std::endl;
    std::cout << "5.5 < 5.5: " << (a < c) << " (should be 0)" << std::endl;
    std::cout << "0 < 5.5: " << (zero < a) << " (should be 1)" << std::endl;
    
    // operator>=
    std::cout << "--- operator>= ---" << std::endl;
    std::cout << "5.5 >= 3.2: " << (a >= b) << " (should be 1)" << std::endl;
    std::cout << "3.2 >= 5.5: " << (b >= a) << " (should be 0)" << std::endl;
    std::cout << "5.5 >= 5.5: " << (a >= c) << " (should be 1)" << std::endl;
    
    // operator<=
    std::cout << "--- operator<= ---" << std::endl;
    std::cout << "3.2 <= 5.5: " << (b <= a) << " (should be 1)" << std::endl;
    std::cout << "5.5 <= 3.2: " << (a <= b) << " (should be 0)" << std::endl;
    std::cout << "5.5 <= 5.5: " << (a <= c) << " (should be 1)" << std::endl;
    
    // operator==
    std::cout << "--- operator== ---" << std::endl;
    std::cout << "5.5 == 5.5: " << (a == c) << " (should be 1)" << std::endl;
    std::cout << "5.5 == 3.2: " << (a == b) << " (should be 0)" << std::endl;
    std::cout << "0 == 0: " << (zero == Fixed()) << " (should be 1)" << std::endl;
    
    // operator!=
    std::cout << "--- operator!= ---" << std::endl;
    std::cout << "5.5 != 3.2: " << (a != b) << " (should be 1)" << std::endl;
    std::cout << "5.5 != 5.5: " << (a != c) << " (should be 0)" << std::endl;
    
    std::cout << "\n=== ARITHMETIC OPERATORS TESTS ===" << std::endl;
    
    // operator+
    std::cout << "--- operator+ ---" << std::endl;
    Fixed sum1 = a + b;        // 5.5 + 3.2 = 8.7
    Fixed sum2 = Fixed(2.5f) + Fixed(1.25f);  // 2.5 + 1.25 = 3.75
    std::cout << "5.5 + 3.2 = " << sum1 << " (should be 8.7)" << std::endl;
    std::cout << "2.5 + 1.25 = " << sum2 << " (should be 3.75)" << std::endl;
    std::cout << "0 + 5.5 = " << (zero + a) << " (should be 5.5)" << std::endl;
    
    // operator-
    std::cout << "--- operator- ---" << std::endl;
    Fixed diff1 = a - b;       // 5.5 - 3.2 = 2.3
    Fixed diff2 = b - a;       // 3.2 - 5.5 = -2.3
    std::cout << "5.5 - 3.2 = " << diff1 << " (should be 2.3)" << std::endl;
    std::cout << "3.2 - 5.5 = " << diff2 << " (should be -2.3)" << std::endl;
    std::cout << "5.5 - 0 = " << (a - zero) << " (should be 5.5)" << std::endl;
    
    // operator*
    std::cout << "--- operator* ---" << std::endl;
    Fixed mult1 = Fixed(2.0f) * Fixed(3.0f);    // 2.0 * 3.0 = 6.0
    Fixed mult2 = Fixed(1.5f) * Fixed(2.0f);    // 1.5 * 2.0 = 3.0
    Fixed mult3 = Fixed(0.5f) * Fixed(0.25f);   // 0.5 * 0.25 = 0.125
    std::cout << "2.0 * 3.0 = " << mult1 << " (should be 6)" << std::endl;
    std::cout << "1.5 * 2.0 = " << mult2 << " (should be 3)" << std::endl;
    std::cout << "0.5 * 0.25 = " << mult3 << " (should be 0.125)" << std::endl;
    std::cout << "5.5 * 0 = " << (a * zero) << " (should be 0)" << std::endl;
    
    // operator/
    std::cout << "--- operator/ ---" << std::endl;
    Fixed div1 = Fixed(6.0f) / Fixed(2.0f);     // 6.0 / 2.0 = 3.0
    Fixed div2 = Fixed(5.0f) / Fixed(2.0f);     // 5.0 / 2.0 = 2.5
    Fixed div3 = Fixed(1.0f) / Fixed(4.0f);     // 1.0 / 4.0 = 0.25
    Fixed div4 = Fixed(5.0f) / Fixed(0.0f);     // Division by zero test
    std::cout << "6.0 / 2.0 = " << div1 << " (should be 3)" << std::endl;
    std::cout << "5.0 / 2.0 = " << div2 << " (should be 2.5)" << std::endl;
    std::cout << "1.0 / 4.0 = " << div3 << " (should be 0.25)" << std::endl;
    std::cout << "5.0 / 0.0 = " << div4 << " (should be 0 or error)" << std::endl;
    
    std::cout << "\n=== INCREMENT/DECREMENT TESTS ===" << std::endl;
    
    Fixed x(5.0f);
    std::cout << "Initial x = " << x << std::endl;
    
    std::cout << "--- Pre-increment (++x) ---" << std::endl;
    std::cout << "++x = " << ++x << " (x should increase 1/256)" << std::endl;
    std::cout << "x after ++x = " << x << std::endl;
    
    std::cout << "--- Post-increment (x++) ---" << std::endl;
    Fixed old_x = x++;
    std::cout << "old value from x++ = " << old_x << std::endl;
    std::cout << "x after x++ = " << x << std::endl;
    
    std::cout << "--- Pre-decrement (--x) ---" << std::endl;
    std::cout << "--x = " << --x << std::endl;
    std::cout << "x after --x = " << x << std::endl;
    
    std::cout << "--- Post-decrement (x--) ---" << std::endl;
    Fixed old_x2 = x--;
    std::cout << "old value from x-- = " << old_x2 << std::endl;
    std::cout << "x after x-- = " << x << std::endl;
    
    std::cout << "\n=== EDGE CASES ===" << std::endl;
    Fixed tiny(0.00390625f);  
    std::cout << "Smallest value (1/256): " << tiny << std::endl;
    std::cout << "++tiny = " << ++tiny << std::endl;
    
    Fixed negativeTest(-5.5f);
    std::cout << "Negative test (-5.5): " << negativeTest << std::endl;
    std::cout << "++negative = " << ++negativeTest << std::endl;
    std::cout << "--negative = " << --negativeTest << std::endl;
    
    return 0;
}