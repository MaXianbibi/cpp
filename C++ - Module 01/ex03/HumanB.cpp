/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:55:00 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 04:11:36 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

HumanB::HumanB(std::string name, Weapon) : weapon(weapon)
{
	this->name = name;
}

HumanB::HumanB(std::string name) : weapon(tmp) {
	this->name = name;
}

HumanB::~HumanB()
{
}