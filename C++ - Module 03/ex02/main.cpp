/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 07:53:28 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/06 19:35:12 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{

	std::cout << "\n\n\n";
	{
		ScavTrap bob("bob");

		bob.attack("k");
		bob.beRepaired(10);
		bob.takeDamage(50);
		bob.guardGate();
	}
	
	std::cout << "\n\n\n";
	{
		FragTrap jean("jean");

		jean.attack("k");
		jean.beRepaired(10);
		jean.takeDamage(50);
		jean.highFivesGuys();
	}	

	std::cout << "\n\n\n";
	{
		ClapTrap robot;

		robot.beRepaired(2);
		robot.attack("Someone");
		robot.takeDamage(5);
	}

	return (0);
}