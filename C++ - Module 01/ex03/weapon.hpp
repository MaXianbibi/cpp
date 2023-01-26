/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:44:32 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 01:29:11 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
#include <cassert>
#include <cstdio>
#include <iomanip>

#include "humanA.hpp"


class Weapon
{
public:
	Weapon();
	~Weapon();

	const std::string &getType() const
	{
		return type;
	}

	void setType(std::string str)
	{
		type = str;
	}

private:
	std::string type;
};

#endif
