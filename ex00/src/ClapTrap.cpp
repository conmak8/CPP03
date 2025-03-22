/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 09:58:15 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/22 12:22:31 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/Colors.hpp"

//-----------------OCF----------------------//
ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)		// * Constructor
{
	std::cout << GREEN << "ClapTrap 🏗️  Constructor called for " << UBR << name << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name), hitPoints(10), energyPoints(10), attackDamage(0)	// * Copy constructor
{
	std::cout << GREEN << "ClapTrap 🏗️  Copy Constructor called for " << UBR << name << RESET << std::endl;
}

// ? is this better solution and why
/* // Copy Constructor
ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
    std::cout << "ClapTrap Copy constructor called for " << name << std::endl;
} */

ClapTrap &ClapTrap::operator= (const ClapTrap &copy) 															// * Copy assignment
{
	if (this == &copy)
	{
		std::cout << "Self assignment detected, skipping copy";
		return (*this);
	}
	name = copy.name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap() 																							// * Destructor
{
	std::cout << RED << "ClapTrap 🧨 Destructor called for " << UBR << name << RESET << std::endl;
}

//==========================================//
//-----------Methods------------------------//
void ClapTrap::attack(const std::string &target)
{
	if ((hitPoints <= 0) || (energyPoints <= 0))
	{
		std::cout << "🪤  ClapTrap unable to attack " << target << " due to low energy points or hit points!" << std:: endl;
		return;
	}
	energyPoints--;
	std::cout << YELLOW << "🪤  ClapTrap " << UBR << name << RESET << YELLOW << " attack " << target << " causing " << BOLD << attackDamage << RESET << YELLOW << " points of damage!💥" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
	std::cout << RED << "🪤  ClapTrap " << UBR << name << RESET << RED << " takes " << BOLD << amount << RESET << RED << " points of damage! 💥" << RESET << std::endl;
	std::cout << "❤️  HP left : " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((hitPoints <= 0) || (energyPoints <= 0))
	{
		std::cout << "🪤  ClapTrap unable to 🔧 repair due to low energy points or hit points!" << std:: endl;
		return;
	}
	energyPoints--;
	hitPoints += amount;
	std::cout << GREEN << "🪤  ClapTrap " << UBR << name << RESET << GREEN << " 🔧 repair itself, getting better -> " << BOLD << amount << RESET << GREEN << " <- ❤️  hit points." << RESET << std::endl;
	std::cout << "❤️  HP left : " << hitPoints << std::endl;
}
