/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 12:54:04 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/23 13:16:10 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
private:
		std::string	name;
public:
		//-----------OCF-----------------//
		DiamondTrap();										// * Constructor (default)
		DiamondTrap(const std::string &name);				// * Constructor with parameters
		DiamondTrap(const DiamondTrap &copy);				// * Copy constructor
		DiamondTrap &operator= (const DiamondTrap &copy);	// * Copy assignment operator
		~DiamondTrap();										// * Destructor
		//===============================//
		//-----------Methods------------//
		void attack(const std::string &target);
		void whoAmI();
};

#endif // !DIAMONDTRAP_HPP
