/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 00:14:31 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/23 13:10:08 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
public:
		//-----------OCF-----------------//
		ScavTrap();									// * Constructor (default)
		ScavTrap(const std::string &name);			// * Constructor with parameters
		ScavTrap(const ScavTrap &copy);				// * Copy constructor
		ScavTrap &operator= (const ScavTrap &copy);	// * Copy assignment operator
		~ScavTrap();								// * Destructor
		//===============================//
		//-----------Methods------------//
		void attack(const std::string &target);
		void guardGate();
};

#endif // !SCAVTRAP_HPP
