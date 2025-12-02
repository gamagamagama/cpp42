/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:08:21 by mgavorni          #+#    #+#             */
/*   Updated: 2025/12/02 18:58:55 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include "Point.hpp"
#include <iostream>

int main() {
    
    Point a(3, 3);
    Point b(11, 5);
    Point c(9, 1);
    Point point(3.5787843423442, 2.1595296501318);
    
    std::cout << "Triangle vertices:" << std::endl;
    area_print(a, b, c, point);
    //std::cout << result << std::endl;
    return 0;
}
