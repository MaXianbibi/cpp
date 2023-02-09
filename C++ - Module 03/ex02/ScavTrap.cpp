/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:56:45 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/06 19:19:06 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDemage = 20;
	std::cout << "Construction of ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & copy)
{
	std::cout << "Construction of a copy ScavTrap" << std::endl;
	*this = copy;
}

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "Default ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Deconstruction of ScavTrap ! " << std::endl;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap est entré en mode gate keeper ! " << std::endl;
	
}

ScavTrap &ScavTrap::operator=( const ScavTrap & copy )
{
	this->AttackDemage = copy.AttackDemage;
	this->EnergyPoints = copy.EnergyPoints;
	this->Name = copy.Name;
	this->HitPoints = copy.HitPoints;
	return (*this);
}