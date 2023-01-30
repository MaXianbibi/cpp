/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:55:00 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 04:01:32 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

humanA::humanA(std::string name, Weapon &weapon) : name(name)
{
    weaponType = &weapon;
}

humanA::~humanA()
{
}