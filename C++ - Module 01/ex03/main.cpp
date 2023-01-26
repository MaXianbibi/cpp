/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:43:53 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 04:07:07 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

int main(void)
{
	Weapon club = Weapon("crude spiked club");
	
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}