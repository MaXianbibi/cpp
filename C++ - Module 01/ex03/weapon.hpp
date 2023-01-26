/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:44:32 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 03:11:43 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
#include <cassert>
#include <cstdio>
#include <iomanip>

# include "class.hpp"

// #include "HumanA.hpp" WTF CHECK THIS OUT

class Weapon
{
public:
	int test;
	Weapon();
	Weapon(std::string name);
	~Weapon();

	const std::string &getType() const
	{
		return type;
	}

	void setType(std::string str)
	{
		this->type = str;
	}

private:
	std::string type;
};

#endif
