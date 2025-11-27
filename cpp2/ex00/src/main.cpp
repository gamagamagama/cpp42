/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:32:14 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/26 16:16:03 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Colors.hpp"

int main( void ) {

Fixed a; //calls default constructor
std::cout << BRED << "DC on a" << RESET << std::endl;
std::cout << std::endl;

Fixed b( a ); //calls copy constructor
std::cout << BYELLOW << "CC on b " << RESET << std::endl;
std::cout << std::endl;

Fixed c; //calls default constructor
std::cout << BRED << "DC on c" << RESET << std::endl; 
std::cout << std::endl;

c = b; //calls copy assigment operator
std::cout << BGREEN << "CA on c" << RESET << std::endl;


std::cout << std::endl;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}
