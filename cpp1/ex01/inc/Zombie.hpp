/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:21:03 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 15:54:02 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        Zombie();
        ~Zombie(void);
        void	announce(void);
        void    addName(std::string name);
    private:
        std::string name;
};
Zombie* zombieHorde(int N, std::string name);

#endif
