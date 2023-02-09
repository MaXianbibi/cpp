/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:43:30 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/06 19:31:37 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string Name;
	int HitPoints;
	int EnergyPoints;
	int AttackDemage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap & copy);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap &operator=( const ClapTrap & copy );
	virtual ~ClapTrap();
};

#endif

