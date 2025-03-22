/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmakario <cmakario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 11:22:32 by cmakario          #+#    #+#             */
/*   Updated: 2025/03/22 11:26:44 by cmakario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main()
{
	ClapTrap cp("Markus");

	cp.attack("Ceasar");
	cp.takeDamage(2);
	cp.beRepaired(4);
	cp.takeDamage(12);
	cp.attack("Neron");
	cp.beRepaired(5);

	return (0);
}
