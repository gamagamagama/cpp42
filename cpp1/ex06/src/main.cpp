/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:15:26 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/24 17:12:13 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    
    if (argc == 2)
        harl.harlFilter(argv[1]);
    else
        std::cout << "Invalid number of arguments" << std::endl;
    return(0);
}
