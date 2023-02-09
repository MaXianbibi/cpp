/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:43:56 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/06 19:16:52 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(100), EnergyPoints(50), AttackDemage(20)
{
	std::cout << "Hello : " << this->Name << std::endl;
}
ClapTrap::ClapTrap( void ) : Name("Default"), HitPoints(10), EnergyPoints(10), AttackDemage(0)
{
	std::cout << "Default ClapTrap" << std::endl;	
}

ClapTrap::ClapTrap(const ClapTrap & copy)
{
	std::cout << "Hello copy :)" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Goodbye : " << this->Name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->EnergyPoints > 0 && this->HitPoints > 0)
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDemage << " points of damage!" << std::endl;
	else
	{
		if (this->EnergyPoints <= 0)
			std::cout << "No more energy :(" << std::endl;
		if (this->HitPoints <= 0)
			std::cout << "U dead :(" << std::endl;
	}
	this->EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " receive " << amount << " demage(s)" << std::endl;
	this->HitPoints -= amount;
	std::cout << "ClapTrap " << this->Name << "'s life is now : " << ((this->HitPoints > 0) ? this->HitPoints : 0) << std::endl;

}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoints > 0 && this->HitPoints > 0)
	{
		std::cout << "ClapTrap " << this->Name << " heal " << amount << std::endl;
		this->HitPoints += amount;
		std::cout << "ClapTrap " << this->Name << "'s life is now : " << this->HitPoints << std::endl;
	}
	else
	{
		if (this->EnergyPoints <= 0)
			std::cout << "No more energy :(" << std::endl;
		if (this->HitPoints <= 0)
			std::cout << "U dead :(" << std::endl;
	}
	this->EnergyPoints--;
}

ClapTrap &ClapTrap::operator=( const ClapTrap & copy )
{
	this->AttackDemage = copy.AttackDemage;
	this->EnergyPoints = copy.EnergyPoints;
	this->Name = copy.Name;
	this->HitPoints = copy.HitPoints;
	return (*this);
}