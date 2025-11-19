/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:15:26 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/14 13:09:30 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    
    harl.complain("NO");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    
    return(0);
}
