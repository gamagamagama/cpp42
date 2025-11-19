/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:38:59 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 15:53:55 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0) return NULL;
    Zombie* horde = new Zombie[N];          
    for (int i = 0; i < N; ++i)
        horde[i].addName(name);
    return horde;  
}
