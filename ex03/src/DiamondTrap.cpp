/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:02:48 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/24 10:14:43 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"
#include "../include/Colors.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unknown_clap_name")																		// * Constructor
{
	this->name = "Unknown";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << CYAN << "💎 DiamondTrap 🏗️  Constructor called for " << UBR << name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)				// * Constructor with parameters
{
	this->name = name;
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << CYAN << "💎 DiamondTrap 🏗️  Constructor called for " << UBR << name << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)								// * Copy constructor
{
	std::cout << CYAN << "💎 DiamondTrap 🏗️  Copy Constructor called for " << UBR << name << RESET << std::endl;
}

//  Todo : not sure how to handle this one
DiamondTrap &DiamondTrap::operator= (const DiamondTrap &copy)																	// * Copy assignment operator
{
	if (this == &copy)
	{
		std::cout << "Self assignment detected, skipping copy";
		return (*this);
	}
	ClapTrap::operator=(copy);
	name = copy.name;				// ! check again what happens here!
	// ClapTrap::name = copy.ClapTrap::name;
	// hitPoints = copy.hitPoints;
	// energyPoints = copy.energyPoints;
	// attackDamage = copy.attackDamage;
	
	std::cout << CYAN << "💎 DiamondTrap 🏗️  Copy Assignment operator called for " << UBR << name << RESET << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()																										// * Destructor
{
	std::cout << RED << "💎 DiamondTrap 🧨 Destructor called for " << UBR << name << RESET << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << CYAN << "💎 DiamondTrap name is : " << name << " | 🪤  ClapTrap name is : " << ClapTrap::name << RESET << std:: endl;
}
