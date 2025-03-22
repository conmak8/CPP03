/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 00:20:58 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/23 00:45:04 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/Colors.hpp"


ScavTrap::ScavTrap() : ClapTrap() // * Constructor
{
	std::cout << GREEN << "ScavTrap 🏗️  Constructor called for " << UBR << getName() << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)  // * Constructor with parameters
{
	std::cout << GREEN << "ScavTrap 🏗️  Copy Constructor called for " << UBR << name << RESET << std::endl;
}



// ScavTrap::~ScavTrap() : 
