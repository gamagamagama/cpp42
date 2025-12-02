/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:08:21 by mgavorni          #+#    #+#             */
/*   Updated: 2025/12/02 20:04:23 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include "Point.hpp"
#include <iostream>

int main() {
    
    Point a(-16.4705487410336, -9.0010578182507);
    Point b(-13.163162065997, -2.7203639303024);
    Point c(13.6243173590412, -6.0133246300755);
    Point point(12, -6);
    
    std::cout << "Triangle vertices:" << std::endl;
    area_print(a, b, c, point);
    //std::cout << result << std::endl;
    return 0;
}
