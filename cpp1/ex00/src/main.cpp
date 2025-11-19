/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:31:53 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/12 15:30:36 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *zombie = newZombie("Heap zombie");
    zombie->announce();
    randomChump("Stack zombie");
    delete (zombie);
    return (0);
}
