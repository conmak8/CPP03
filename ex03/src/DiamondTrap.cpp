/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:02:48 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/23 13:26:43 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"
#include "../include/Colors.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unknown_clap_name")																		// * Constructor
{
	this->name = "Uknown";
	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
	std::cout << CYAN << "🦿 DiamondTrap 🏗️  Constructor called for " << UBR << name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)				// * Constructor with parameters
{
	this->name = name;
	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
	std::cout << CYAN << "🦿 DiamondTrap 🏗️  Constructor called for " << UBR << name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy) 																// * Copy constructor
{
	std::cout << CYAN << "🦿 DiamondTrap 🏗️  Copy Constructor called for " << UBR << name << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &copy)																	// * Copy assignment operator
{
	if (this == &copy)
	{
		std::cout << "Self assignment detected, skipping copy";
		return (*this);
	}
	ClapTrap::operator=(copy);
	std::cout << CYAN << "🦿 DiamondTrap 🏗️  Copy Assignment operator called for " << UBR << name << RESET << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()																									// * Destructor
{
	std::cout << RED << "🦿 DiamondTrap 🧨 Destructor called for " << UBR << name << RESET << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	if ((hitPoints <= 0) || (energyPoints <= 0))
	{
		std::cout << "🦿  DiamondTrap unable to attack " << target << " due to low energy points or hit points!" << std:: endl;
		return;
	}
	energyPoints--;
	std::cout << YELLOW << "🦿 DiamondTrap " << UBR << name << RESET << YELLOW << " attacks " << target << " causing " << BOLD << attackDamage << RESET << YELLOW << " points of damage!💥" << RESET << std::endl;
	std::cout << "❤️  HP left : " << hitPoints << std::endl;
	std::cout << "⚡️ EP left : " << energyPoints << std::endl;
}

// void DiamondTrap::whoAmI()
// {
// 	std::cout << CYAN << "🦿 DiamondTrap "<< name << " in now politely asking 🙌 otherwise 💨" << RESET << std:: endl;
// }
