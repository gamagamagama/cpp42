/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:15:26 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/24 19:02:10 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
/** V2
// int main(int argc, char **argv)
// {
    //     Harl harl;
    
    //     if (argc == 2)
    //         harl.harlFilter(argv[1]);
    //     else
    //         std::cout << "Invalid number of arguments" << std::endl;
    //     return(0);
    // }
*/

//V1
int main(int argc, char **argv)
{
    Harl harl;
    
    if (argc == 2)
        harl.complain(argv[1]);
    else
        std::cout << "Invalid number of arguments" << std::endl;
    return(0);
}