/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavorni <mgavorni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:11:27 by mgavorni          #+#    #+#             */
/*   Updated: 2025/11/18 18:15:16 by mgavorni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// int main() {
//     ClapTrap    CP1("CP");
//     CP1.attack("CP2");
//     CP1.takeDamage(8);
//     CP1.takeDamage(1);
//     CP1.beRepaired(5);
//     CP1.beRepaired(1);
//     CP1.beRepaired(5);
//     CP1.beRepaired(5);
//     CP1.beRepaired(5);
//     CP1.beRepaired(5);
//     CP1.beRepaired(5);
//     CP1.beRepaired(5);
//     CP1.beRepaired(5);
//     CP1.beRepaired(5);

//     CP1.attack("CP2");
//     return 0;
// }

#include "ClapTrap.hpp"

int main() {
    std::cout << "=== CLAPTRAP TESTING ===" << std::endl << std::endl;
    
    std::cout << "--- Creating ClapTraps ---" << std::endl;
    ClapTrap robot1("R2D2");
    ClapTrap robot2("C3PO");
    
    std::cout << "\n--- Testing attack (0 damage) ---" << std::endl;
    robot1.attack("Enemy");
    robot2.attack("Orc");
    
    std::cout << "\n--- Testing repair ---" << std::endl;
    robot1.beRepaired(3);
    robot1.takeDamage(5);  
    robot2.beRepaired(15);
    robot2.takeDamage(8);
    robot2.beRepaired(1);
    robot1.beRepaired(1);
    
    std::cout << "\n--- Testing take damage ---" << std::endl;
    robot1.takeDamage(5);
    robot2.takeDamage(15);
    
    std::cout << "\n--- Testing dead robot actions ---" << std::endl;
    robot2.attack("Anyone");
    robot2.beRepaired(5);
    
    std::cout << "\n--- Testing energy and dead after 10 attacks  ---" << std::endl;
    robot1.beRepaired(10);
    for (int i = 0; i < 10; i++)
    {
        robot1.attack("Enemy");
        robot1.takeDamage(1);        
    }
 
    return 0;
}