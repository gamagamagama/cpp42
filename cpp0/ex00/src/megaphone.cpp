/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavornik <mgavornik@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:43:59 by mgavornik         #+#    #+#             */
/*   Updated: 2025/09/02 14:54:05 by mgavornik        ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <cctype>
#include <iostream>



int main (int ac, char **av)
{
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for(int i = 1; i < ac; i++)
        {
            for(int j = 0; av[i][j]; j++)
                std::cout << (char)std::toupper(av[i][j]);
        }

    }
    std::cout << std::endl;
    return 0;
}

