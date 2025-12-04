/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:08:21 by mgavorni          #+#    #+#             */
/*   Updated: 2025/12/04 14:05:48 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include "Point.hpp"
#include <iostream>

int main() {
    
    Point a(-7.47, -4.07);
    Point b(-5.07, 1.61);
    Point c(-1.73, -2.89);
    Point point(-4.69, -2.69);
    
    
  //  area_print(a, b, c, point);
    
    bool result = bsp(a, b, c, point);
    std::cout << "Result: " << result << " should be true" <<std::endl;
    std::cout << std::endl;

    // test 2
    a = Point(-3.1487497159051, 0.2566120437312);
    b = Point(1.9653282171716, 1.3370510436769);
    c = Point(1.2690453060954, -1.2079830450842);
    
   // area_print(a, b, c, point);
    
    result = bsp(a, b, c, point);
    std::cout << "Result: " << result << "(point outside) should be false" <<std::endl;
    std::cout << std::endl;

    // test 3
    a = Point(-10, 0);
    b = Point(0, 6);
    c = Point(0, -6);

   // area_print(a, b, c, point);

    result = bsp(a, b, c, point);
    std::cout << "Result: " << result << "(point inside) should be true" <<std::endl;
    std::cout << std::endl;

    //test 4
    a = Point(-10, 0);
    b = Point(0, 6);
    c = Point(0, -6);
    point = Point(-10, 0);

   // area_print(a, b, c, point);

    result = bsp(a, b, c, point);
    std::cout << "Result: " << result << "(point on vertex) should be false" <<std::endl;
    std::cout << std::endl;

    //test 5
    a = Point(-10, 0);
    b = Point(0, 6);
    c = Point(0, -6);
    point = Point(-5, 3);

  //  area_print(a, b, c, point);

    result = bsp(a, b, c, point);
    std::cout << "Result: " << result << "(point on edge) should be false" <<std::endl;
    std::cout << std::endl;

    //test 6
    a = Point(1, 1);
    b = Point(6, 3);
    c = Point(2.5, 3.21);
    point = Point(4.96, 2.81);
    
   // area_print(a, b, c, point);

    result = bsp(a, b, c, point);    
    std::cout << "Result: " << result << "(point inside) should be true" <<std::endl;
    std::cout << std::endl;

    //test 7
    a = Point(1, 1);
    b = Point(9.14, -5.21);
    c = Point(2.5, 3.21);
    point = Point(4.38, -0.61);

   // area_print(a, b, c, point);

    result = bsp(a, b, c, point);
    std::cout << "Result: " << result << "(point inside) should be true" <<std::endl;
    std::cout << std::endl;

    //test 8
    a = Point(-11, -2);
    b = Point(9.14, -5.21);
    c = Point(17.22, 1.49);
    point = Point(-4.16, 5.19);

//    area_print(a, b, c, point);

    result = bsp(a, b, c, point);
    std::cout << "Result: " << result << "(point outside) should be false" <<std::endl;
    std::cout << std::endl;
    return 0;
}
