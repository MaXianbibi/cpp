/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:43:56 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/06 12:57:51 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoints(10), EnergyPoints(10), AttackDemage(0)
{
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDemage(0)
{
}

ClapTrap::~ClapTrap()
{
}


void ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoints && this->HitPoints)
		std::cout << "ClapTrap " << this->Name << "attacks " << target << ", causing " << this->AttackDemage << "points of damage!" << std::endl;
	else
	{
		if (!this->EnergyPoints)
			std::cout << "no more energy :(" << std::endl;
		if (!this->HitPoints)
			std::cout << "no more hits points :(" << std::endl;
	}
	this->EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
}

void ClapTrap::beRepaired(unsigned int amount)
{
	
}

