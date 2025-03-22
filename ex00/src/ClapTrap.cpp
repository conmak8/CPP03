/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 09:58:15 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/22 10:58:46 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

//-----------------OCF----------------------//
ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)			// * Constructor
{
	std::cout << "ClapTrap Constructor called  for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name), hitPoints(10), energyPoints(10), attackDamage(0)	// * Copy constructor
{
	std::cout << "ClapTrap  Copy Constructor called  for " << name << std::endl;
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
	std::cout << "ClapTrap Destructor called  for " << name << std::endl;
}

//==========================================//
//-----------Methods------------------------//
void ClapTrap::attack(const std::string &target)
{
	std::cout << "🪤 ClapTrap " << name << " attack " << target << " causing " << attackDamage << " points of damage! 💥" << std::endl;
	energyPoints--;
} 

void ClapTrap::takeDamage(unsigned int amount)
{
	
}