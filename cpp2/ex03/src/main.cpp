/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:08:21 by mgavorni          #+#    #+#             */
/*   Updated: 2025/12/01 19:21:33 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include "Point.hpp"
#include <iostream>

int main() {
    
    Point a(0, 0);
    Point b(5, 0);
    Point c(8.80055, 1.18896);
    Point point(6.96159, 0.7893);
    
    std::cout << "Triangle vertices:" << std::endl;
    area_print(a, b, c, point);
    //std::cout << result << std::endl;
    return 0;
}
