/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 09:58:15 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/22 10:37:25 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

//-----------------OCF----------------------//
ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {}			// * Constructor

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name), hitPoints(10), energyPoints(10), attackDamage(0) {}	// * Copy constructor

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

ClapTrap::~ClapTrap() {}; 																						// * Destructor
//==========================================//
//-----------Methods------------------------//
void ClapTrap::attack(std::string const &target)
{
	std::cout << "🪤 ClapTrap " << name << " attack " << target << " causing " << attackDamage << " points of damage! 💥" << std::endl;
} 

void ClapTrap::takeDamage(unsigned int amount)
{
	
}