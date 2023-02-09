/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:30:12 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/06 19:36:43 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDemage = 30;
	std::cout << "Construction of FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap & copy)
{
	std::cout << "Construction of a copy FragTrap" << std::endl;
	*this = copy;
}

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "Default FragTrap" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Deconstruction of FragTrap ! " << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Demande un high five en urgence ! " << std::endl;
	
}

FragTrap &FragTrap::operator=( const FragTrap & copy )
{
	this->AttackDemage = copy.AttackDemage;
	this->EnergyPoints = copy.EnergyPoints;
	this->Name = copy.Name;
	this->HitPoints = copy.HitPoints;
	return (*this);
}