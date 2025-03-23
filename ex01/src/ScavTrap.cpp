/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 00:20:58 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/23 09:23:22 by cmakario         ###   ########.fr       */
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

ScavTrap &ScavTrap::operator= (const ScavTrap &copy)															// * Copy assignment
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
