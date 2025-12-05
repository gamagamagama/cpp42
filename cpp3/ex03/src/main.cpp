/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:11:27 by mgavorni          #+#    #+#             */
/*   Updated: 2025/12/05 15:53:16 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include "Colors.hpp"

int main() {
	{
		std::cout<<BGREEN<<"==========CLAPTRAP=========="<< RESET << std::endl;
		ClapTrap    trap("Clappy");
		trap.getStats(BGREEN);
		trap.attack("Your mom");
		trap.takeDamage(8);
		trap.beRepaired(5);
		trap.takeDamage(7);
		trap.attack("Your mom");
		std::cout<<BGREEN<<"============================"<< RESET << std::endl;
		std::cout<<std::endl;
		std::cout<<BBLUE<<"==========SCAVTRAP=========="<< RESET << std::endl;
		ScavTrap scav("Scavvy");
		scav.getStats(BBLUE);
		scav.attack("Your dad");
		scav.takeDamage(300);
		scav.beRepaired(20);
        scav.attack("Your dad");
		scav.guardGate();
		std::cout<<BBLUE<<"============================"<< RESET << std::endl;
		std::cout<<std::endl;
		std::cout<<BRED<<"==========FRAGTRAP=========="<< RESET << std::endl;
		FragTrap frag("Fraggy");
		frag.getStats(BRED);
		frag.attack("Your sister");
		frag.takeDamage(50);
		frag.beRepaired(20);
		frag.highFivesGuys();
		std::cout<<BRED<<"============================"<< RESET << std::endl;
		std::cout<<std::endl;

		DiamondTrap diamond("Diamond");
		diamond.getStats(BYELLOW);
		diamond.whoAmI();
		diamond.attack("Your brother");
		diamond.takeDamage(8);
		diamond.beRepaired(5);
		diamond.takeDamage(7);
		diamond.attack("Your brother");
		diamond.guardGate();
		diamond.highFivesGuys();
	}
    return 0;
}

