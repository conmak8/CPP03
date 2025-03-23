/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 11:22:32 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/23 11:39:45 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"


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

// ----01: test
	ScavTrap serena("Serena");
	serena.attack("Loci");
	serena.takeDamage(30);
	serena.beRepaired(20);
	serena.guardGate();

	return (0);
}
