/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:11:27 by mgavorni          #+#    #+#             */
/*   Updated: 2025/12/05 12:44:36 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Colors.hpp"

int main() {
    std::cout << BWHITE << "=== CLAPTRAP TESTING ===" << RESET << std::endl; 
    
    std::cout << BCYAN << "--- Creating ClapTraps ---" << RESET << std::endl;
    ClapTrap robot1("Bender");
    ClapTrap robot2("Terminator");
    
    std::cout << BWHITE <<"\n--- Testing attack (0 damage) ---"<< RESET << std::endl;
    robot1.attack("Fry");
    robot2.attack("Human");
    
    std::cout << BWHITE <<"\n--- Testing repair ---"<< RESET << std::endl;
    robot1.beRepaired(3);
    robot1.takeDamage(5);  
    robot2.beRepaired(1500);
    robot2.takeDamage(8);
    robot2.beRepaired(1);
    robot1.beRepaired(1);
    
    std::cout << BWHITE <<"\n--- Testing take damage ---"<< RESET << std::endl;
    robot1.takeDamage(5);
    robot2.takeDamage(15);
    
    std::cout <<BWHITE  <<"\n--- Testing dead robot actions ---" << RESET << std::endl;
    robot2.attack("Your MOM");
    robot2.beRepaired(5);
    
    std::cout << BWHITE <<"\n--- Testing energy and dead after 10 attacks  ---"<< RESET << std::endl;
    robot1.beRepaired(10);
    for (int i = 0; i < 10; i++)
    {
        robot1.attack("Fry");
        robot1.takeDamage(1);        
    }
 
    return 0;
}