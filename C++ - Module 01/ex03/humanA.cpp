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

HumanA::HumanA(std::string name, Weapon &weapon) : weapon_(weapon)
{
    this->name = name;
}

HumanA::~HumanA()
{
}