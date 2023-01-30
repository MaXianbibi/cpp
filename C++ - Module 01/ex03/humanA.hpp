/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:47:59 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 04:12:30 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "class.hpp"

class humanA
{
private:
    std::string name;
    Weapon * weaponType;
    
public:
    humanA(std::string name, Weapon &weapon);
    ~humanA();

    void attack() {
		std::cout << name << " attacks with their " << weaponType->getType() << std::endl;
	}

    void setWeapon(Weapon &weapon) {
        weaponType = &weapon;
    }
    
};




# endif