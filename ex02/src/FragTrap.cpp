/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:19:18 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/23 11:30:02 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include "../include/Colors.hpp"


FragTrap::FragTrap() : ClapTrap("Unknown")																		// * Constructor
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << CYAN << "FragTrap 🏗️  Constructor called for " << UBR << name << RESET << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) 													// * Constructor with parameters
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << CYAN << "FragTrap 🏗️  Constructor called for " << UBR << name << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) 														// * Copy constructor
{
	std::cout << CYAN << "FragTrap 🏗️  Copy Constructor called for " << UBR << name << RESET << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &copy)															// * Copy assignment operator
{
	if (this == &copy)
	{
		std::cout << "Self assignment detected, skipping copy";
		return (*this);
	}
	ClapTrap::operator=(copy);
	std::cout << CYAN << "FragTrap 🏗️  Copy Assignment operator called for " << UBR << name << RESET << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << RED << "FragTrap 🧨 Destructor called for " << UBR << name << RESET << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if ((hitPoints <= 0) || (energyPoints <= 0))
	{
		std::cout << "🦿  FragTrap unable to attack " << target << " due to low energy points or hit points!" << std:: endl;
		return;
	}
	energyPoints--;
	std::cout << YELLOW << "🦿  FragTrap " << UBR << name << RESET << YELLOW << " attacks " << target << " causing " << BOLD << attackDamage << RESET << YELLOW << " points of damage!💥" << RESET << std::endl;
	std::cout << "❤️  HP left : " << hitPoints << std::endl;
	std::cout << "⚡️ EP left : " << energyPoints << std::endl;
}

void highFiveGuys(void)
{
	std::cout << CYAN << "🦿  FragTrap in now politely asking 🙌 otherwise 💨" << RESET << std:: endl;
}
