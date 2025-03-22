/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 09:43:36 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/22 10:54:51 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>


class ClapTrap
{
private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
public:
		//-----------OCF-----------------//
													// todo constructor without parameter and why?
		ClapTrap(const std::string &name);					// * Constructor
		ClapTrap(const ClapTrap &copy);				// * Copy constructor
		ClapTrap &operator= (const ClapTrap &copy); // * Copy assignment
		~ClapTrap();								// * Destructor
		//===============================//
		//-----------Methods------------//
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};

#endif // !CLAPTRAP_HPP
