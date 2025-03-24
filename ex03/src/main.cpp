/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 11:22:32 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/24 18:44:07 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"


int main()
{
	// ClapTrap cp("Markus");
	// // ClapTrap cp2;

	// cp.attack("Ceasar");
	// // std::cout << cp.energyPoints << std::endl;
	// cp.takeDamage(2);
	// cp.beRepaired(4);
	// cp.takeDamage(4);
	// // ClapTrap cp3(cp);
	// // std::cout << cp3.getEnergy() << "aaaa" << std::endl;
	// cp.attack("Neron");
	// // std::cout << cp3.getEnergy() << "bbbb" << std::endl;
	// // std::cout << cp.getEnergy() << "vvvv" << std::endl;
	// cp.beRepaired(5);
	// cp.takeDamage(24);

// // ----01: test
// 	ScavTrap serena("Serena");
// 	serena.attack("Loci");
// 	serena.takeDamage(30);
// 	serena.beRepaired(20);
// 	serena.guardGate();

// // ----02: test
// 	FragTrap fraggy("Fraggy");
		
// 	fraggy.attack("Enemy");
// 	fraggy.takeDamage(40);
// 	fraggy.beRepaired(25);
// 	fraggy.highFiveGuys();
// ----03: Diamond
	// DiamondTrap diamond("SweetDiamond");
    // diamond.attack("Enemy");
    // diamond.takeDamage(30);
    // diamond.beRepaired(20);
    // diamond.whoAmI();

	// DiamondTrap diamond;
	// diamond.attack("AAAAAAA");
	// diamond.whoAmI();

	// DiamondTrap diamond1("Sweet");
	// DiamondTrap diamond2("Sparkle");
	
	// diamond2 = diamond1;
	// diamond2.whoAmI();
	// diamond2.attack("Enemy");

	DiamondTrap diamond1("Sweet");
	DiamondTrap d2 = diamond1;
	d2.whoAmI();

	return (0);
}
