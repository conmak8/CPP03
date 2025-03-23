/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 00:20:58 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/23 11:37:57 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/Colors.hpp"


ScavTrap::ScavTrap() : ClapTrap("Unknown")																		// * Constructor
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << BLUE << "ScavTrap 🏗️  Constructor called for " << UBR << name << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) 													// * Constructor with parameters
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << BLUE << "ScavTrap 🏗️  Constructor called for " << UBR << name << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) 														// * Copy constructor
{
	std::cout << BLUE << "ScavTrap 🏗️  Copy Constructor called for " << UBR << name << RESET << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &copy)															// * Copy assignment operator
{
	if (this == &copy)
	{
		std::cout << "Self assignment detected, skipping copy";
		return (*this);
	}
	ClapTrap::operator=(copy);
	std::cout << BLUE << "ScavTrap 🏗️  Copy Assignment operator called for " << UBR << name << RESET << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap 🧨 Destructor called for " << UBR << name << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if ((hitPoints <= 0) || (energyPoints <= 0))
	{
		std::cout << "🤖  ScavTrap unable to attack " << target << " due to low energy points or hit points!" << std:: endl;
		return;
	}
	energyPoints--;
	std::cout << YELLOW << "🤖  ScavTrap " << UBR << name << RESET << YELLOW << " attacks " << target << " causing " << BOLD << attackDamage << RESET << YELLOW << " points of damage!💥" << RESET << std::endl;
	std::cout << "❤️  HP left : " << hitPoints << std::endl;
	std::cout << "⚡️ EP left : " << energyPoints << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << BLUE << "🤖  ScavTrap " << name << " in now in Asgard's Gate Keeper mode! ᛰ" << RESET << std:: endl;
}
