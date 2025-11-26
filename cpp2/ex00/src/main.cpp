/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:32:14 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/26 14:44:58 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Colors.hpp"

int main( void ) {

Fixed a; //calls default constructor
Fixed b( a ); //calls copy constructor and copy assignment operator
Fixed c;
c = b; //calls copy assigment operator

std::cout << BLUE <<"Before getRawBits" << RESET << std::endl;
std::cout << "a  " << a.getRawBits() << std::endl;
std::cout << "b  " << b.getRawBits() << std::endl;
std::cout << "c  " << c.getRawBits() << std::endl;
return 0;
}
