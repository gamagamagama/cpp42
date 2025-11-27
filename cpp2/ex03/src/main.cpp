/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:08:21 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/26 20:29:26 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Fixed.hpp"
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
#include "Colors.hpp"


//Float Number * 256 = Fixed point number(integer)
// 2.6 * 256 = 665.6 = 665
// 665 / 256 = 2 * 256 = 512
// 665 - 512 = 153

// 665 to binary = 10 10011001
// ================2  128+0+0+16+8+0+0+1(153)
// 255 to binary = 00 11111111
// ================0  128+64+32+16+8+4+2+1(255)
// 665 & 255 ===== 00 10011001
// ================0  153
// 128 64 32 16 8 4 2 1
// 128 + 16 + 8 + 1 = 153

// first = 512 / 256 = 2
// second = 153 / 256 = 0.59765
// 2 + 0.59765 = 2.59765


//123.8
//31692.8 = 31692
//123 * 256 = 31488 /256 = 123
// 204 / 256 = 0.796875
// 0.796875 + 123 = 123.796875

int main() {

    std::cout << std::endl;
    std::cout << BWHITE <<"=== COMPARISON OPERATORS TESTS ==="<< RESET << std::endl;
    
    Fixed a(5.5f);
    Fixed b(3.2f);
    Fixed c(5.5f);  // Same as a
    Fixed zero;     // Default (0)
    
    // operator>

    std::cout << BWHITE <<"--- operator> ---"<< RESET << std::endl;
    std::cout << "5.5 > 3.2: " << (a > b) << " (should be 1)" << std::endl;
    std::cout << "3.2 > 5.5: " << (b > a) << " (should be 0)" << std::endl;
    std::cout << "5.5 > 5.5: " << (a > c) << " (should be 0)" << std::endl;
    std::cout << "5.5 > 0: " << (a > zero) << " (should be 1)" << std::endl;
    std::cout << std::endl;
    
    // operator<
    std::cout << BWHITE << "--- operator< ---"<< RESET << std::endl;
    std::cout << "3.2 < 5.5: " << (b < a) << " (should be 1)" << std::endl;
    std::cout << "5.5 < 3.2: " << (a < b) << " (should be 0)" << std::endl;
    std::cout << "5.5 < 5.5: " << (a < c) << " (should be 0)" << std::endl;
    std::cout << "0 < 5.5: " << (zero < a) << " (should be 1)" << std::endl;
    std::cout << std::endl;
    
    // operator>=
    std::cout << BWHITE << "--- operator>= ---"<< RESET << std::endl;
    std::cout << "5.5 >= 3.2: " << (a >= b) << " (should be 1)" << std::endl;
    std::cout << "3.2 >= 5.5: " << (b >= a) << " (should be 0)" << std::endl;
    std::cout << "5.5 >= 5.5: " << (a >= c) << " (should be 1)" << std::endl;
    std::cout << std::endl;
    
    // operator<=
    std::cout << BWHITE <<"--- operator<= ---"<< RESET << std::endl;
    std::cout << "3.2 <= 5.5: " << (b <= a) << " (should be 1)" << std::endl;
    std::cout << "5.5 <= 3.2: " << (a <= b) << " (should be 0)" << std::endl;
    std::cout << "5.5 <= 5.5: " << (a <= c) << " (should be 1)" << std::endl;
    std::cout << std::endl;
    
    // operator==
    std::cout << BWHITE << "--- operator== ---"<< RESET << std::endl;
    std::cout << "5.5 == 5.5: " << (a == c) << " (should be 1)" << std::endl;
    std::cout << "5.5 == 3.2: " << (a == b) << " (should be 0)" << std::endl;
    std::cout << std::endl;
    
    // operator!=
    std::cout << BWHITE <<"--- operator!= ---"<< RESET << std::endl;
    std::cout << "5.5 != 3.2: " << (a != b) << " (should be 1)" << std::endl;
    std::cout << "5.5 != 5.5: " << (a != c) << " (should be 0)" << std::endl;
    std::cout << std::endl;
    
    
    std::cout << BWHITE << "\n=== ARITHMETIC OPERATORS TESTS ==="<< RESET << std::endl;
    
    // operator+
    std::cout << BWHITE <<"--- operator+ ---"<< RESET << std::endl;
    Fixed sum0 = zero + a;
    Fixed sum1 = a + b;
    Fixed sum2 = Fixed(2.5f) + Fixed(1.25f);
    std::cout << "5.5 + 3.2 = " << sum1 << " (should be 8.7)" << std::endl;
    std::cout << "2.5 + 1.25 = " << sum2 << " (should be 3.75)" << std::endl;
    std::cout << "0 + 5.5 = " << sum0 << " (should be 5.5)" << std::endl;
    std::cout << std::endl;
     
    // operator-
    std::cout<< BWHITE << "--- operator- ---"<< RESET << std::endl;
    Fixed diff1 = a - b;
    Fixed diff2 = b - a;
    Fixed diff3 = zero - a;
    std::cout << "5.5 - 3.2 = " << diff1 << " (should be 2.3)" << std::endl;
    std::cout << "3.2 - 5.5 = " << diff2 << " (should be -2.3)" << std::endl;
    std::cout << "5.5 - 0 = " << diff3 << " (should be 5.5)" << std::endl;
    std::cout << std::endl;

    // operator*
    std::cout << BWHITE <<"--- operator* ---"<< RESET << std::endl;
    Fixed mult1 = Fixed(2.0f) * Fixed(3.0f);
    Fixed mult2 = Fixed(1.5f) * Fixed(2.0f);
    Fixed mult3 = Fixed(0.5f) * Fixed(0.25f);
    Fixed mult4 = a * zero;
    std::cout << "2.0 * 3.0 = " << mult1 << " (should be 6)" << std::endl;
    std::cout << "1.5 * 2.0 = " << mult2 << " (should be 3)" << std::endl;
    std::cout << "0.5 * 0.25 = " << mult3 << " (should be 0.125)" << std::endl;
    std::cout << "5.5 * 0 = " << mult4 << " (should be 0)" << std::endl;
    std::cout << std::endl;
    
    // operator/
    std::cout << BWHITE <<"--- operator/ ---"<< RESET << std::endl;
    Fixed div1 = Fixed(6.0f) / Fixed(2.0f);
    Fixed div2 = Fixed(5.0f) / Fixed(2.0f);
    Fixed div3 = Fixed(1.0f) / Fixed(4.0f);
    Fixed div4 = Fixed(5.0f) / Fixed(0.0f);
    std::cout << "6.0 / 2.0 = " << div1 << " (should be 3)" << std::endl;
    std::cout << "5.0 / 2.0 = " << div2 << " (should be 2.5)" << std::endl;
    std::cout << "1.0 / 4.0 = " << div3 << " (should be 0.25)" << std::endl;
    std::cout << "5.0 / 0.0 = " << div4 << " (should be 0 or error)" << std::endl;
    std::cout << std::endl;
    
    std::cout <<BWHITE <<"\n=== INCREMENT/DECREMENT TESTS ==="<< RESET << std::endl;
    
    Fixed x(5.0f);
    std::cout << "Initial x = " << x << std::endl;
    
    std::cout << BWHITE <<"--- Pre-increment (++x) ---" << RESET <<std::endl;
    std::cout << "++x = " << ++x << " (x should increase 1/256)" << std::endl;
    std::cout << "x after ++x = " << x << std::endl;
    
    std::cout << BWHITE << "--- Post-increment (x++) ---"<< RESET << std::endl;
    Fixed old_x = x++;
    std::cout << "old value from x++ = " << old_x << std::endl;
    std::cout << "x after x++ = " << x << std::endl;
    
    std::cout << BWHITE <<"--- Pre-decrement (--x) ---"<< RESET << std::endl;
    std::cout << "--x = " << --x << std::endl;
    std::cout << "x after --x = " << x << std::endl;
     std::cout << "--x = " << --x << std::endl;
    std::cout << "value of x = " << x << std::endl;
    
    std::cout << BWHITE << "--- Post-decrement (x--) ---"<< RESET << std::endl;
    Fixed old_x2 = x--;
    std::cout << "old value from x-- = " << old_x2 << std::endl;
    std::cout << "x after x-- = " << x << std::endl; 
    std::cout << std::endl;
    
    std::cout << BWHITE << "\n=== MAX/MIN TESTS ==="<< RESET << std::endl;
    Fixed max = Fixed::max( a, b );
    Fixed min = Fixed::min( a, b );
    
    std::cout << "a = " << a << std::endl; //5.5
    std::cout << "b = " << b << std::endl; //3.2
    std::cout << "Max of a and b = " << max << std::endl;
    std::cout << "Min of a and b = " << min << std::endl;

    Fixed tmp = a;
    a = b - Fixed(1);
    b = tmp - Fixed(1);
    
    max = Fixed::max( a, b );
    min = Fixed::min( a, b );
  
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "Max of a and b = " << max << std::endl;
    std::cout << "Min of a and b = " << min << std::endl;
    
    std::cout << std::endl;

    
    std::cout<< BWHITE << "\n=== EDGE CASES ==="<< RESET << std::endl;
    Fixed tiny(0.00390625f);  
    std::cout << "Smallest value (1/256): " << tiny << std::endl;
    std::cout << "--tiny = " << --tiny << std::endl;
    std::cout << "++tiny = " << ++tiny << std::endl;
    std::cout << "--tiny = " << --tiny << std::endl;
    std::cout << "--tiny = " << --tiny << std::endl;

    std::cout << std::endl;
    
    Fixed negativeTest(-5.5f);
    std::cout << "Negative test (-5.5): " << negativeTest << std::endl;
    std::cout << "++negative = " << ++negativeTest << std::endl;
    std::cout << "--negative = " << --negativeTest << std::endl;
    std::cout << std::endl;
    
    return 0;
}