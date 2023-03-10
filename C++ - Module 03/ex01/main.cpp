/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 07:53:28 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/06 19:21:59 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	{
		ScavTrap bob("bob");

		bob.attack("k");
		bob.beRepaired(10);
		bob.takeDamage(50);
		bob.guardGate();
	}	

	{
		ClapTrap robot;

		robot.beRepaired(2);
		robot.attack("Someone");
		robot.takeDamage(5);
	}

	return (0);
}