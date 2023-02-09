/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:56:34 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/06 19:32:11 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	
public:
	ScavTrap( void );
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & copy);
	~ScavTrap();
	void guardGate( void );
	ScavTrap &operator=( const ScavTrap & copy );
};



#endif