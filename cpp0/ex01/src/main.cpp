/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:34:56 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/23 15:33:12 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook PB;
    std::string input;
    while(true){
        std::cout << "Enter command: ";
        std::getline(std::cin, input);
        if(input.compare("EXIT") == 0)
            break;
        else if(std::cin.eof())
        {
            PB.AsciiArt();
            break;
        }
        PB.processCmd(input);
    }
    return(0);
}
