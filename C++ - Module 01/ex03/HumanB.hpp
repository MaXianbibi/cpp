/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:47:59 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 03:56:55 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "class.hpp"

class HumanB
{
public:
	std::string name;
	
	HumanB(std::string name, Weapon &weapon);
	HumanB(std::string name);
	~HumanB();

	void attack() {
		std::cout << name << " attacks with their " << weapon.getType() << std::endl;
	}

	void setWeapon(Weapon &tmp) {
		weapon = tmp;
	}
	
private:
	Weapon tmp;
	Weapon &weapon;
};

# endif