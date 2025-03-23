/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:08:12 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/23 11:42:14 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
public:
		//-----------OCF-----------------//
		FragTrap();									// * Constructor (default)
		FragTrap(const std::string &name);			// * Constructor with parameters
		FragTrap(const FragTrap &copy);				// * Copy constructor
		FragTrap &operator= (const FragTrap &copy);	// * Copy assignment operator
		~FragTrap();								// * Destructor
		//===============================//
		//-----------Methods------------//
		void attack(const std::string &target);
		void highFiveGuys(void);
};

#endif // !FRAGTRAP_HPP
