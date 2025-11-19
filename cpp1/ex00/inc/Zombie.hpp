/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:21:03 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/12 15:28:31 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void	announce(void);
    private:
        std::string name;
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
