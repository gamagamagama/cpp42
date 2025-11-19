/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:11:27 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/19 10:05:55 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	{
		// ClapTrap    trap("Clappy");
		// trap.attack("Nemesis");
		// trap.takeDamage(8);
		// trap.beRepaired(5);
		// trap.takeDamage(7);
		// trap.attack("Nemesis");

		// ScavTrap scav("Scavvy");
		// scav.attack("Bandit");
		// scav.takeDamage(300);
		// scav.beRepaired(20);
        // scav.attack("Bandit");
		// scav.guardGate();

		FragTrap frag("Fraggy");
		frag.attack("Your mom");
		frag.takeDamage(50);
		frag.beRepaired(20);
		frag.highFivesGuys();
	}
    return 0;
}

