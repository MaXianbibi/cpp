/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:47:59 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/28 11:30:29 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "class.hpp"

class HumanB
{
public:	
	HumanB(std::string name, Weapon &weapon);
	HumanB(std::string name);
	~HumanB();

	void attack() {
		std::cout << name << " attacks with their " << ((weaponType) ? weaponType->getType() : "hands")  << std::endl;
	}

    void setWeapon(Weapon &weapon) {
        weaponType = &weapon;
    }

private:
    std::string name;
    Weapon * weaponType;
};

# endif