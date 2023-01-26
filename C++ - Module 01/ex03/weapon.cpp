/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:06:05 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 03:46:01 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "class.hpp"

Weapon::Weapon(std::string name)
{
	this->type = name;
}
Weapon::Weapon(){
	this->type = "Nothing at all";
}

Weapon::~Weapon()
{
}
