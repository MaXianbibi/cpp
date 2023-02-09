/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:29:36 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/06 19:39:23 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	std::string Name;
public:
	FragTrap( void );
	FragTrap(std::string name);
	FragTrap(const FragTrap & copy);
	~FragTrap();
	void highFivesGuys(void);
	FragTrap &operator=( const FragTrap & copy );
};





#endif