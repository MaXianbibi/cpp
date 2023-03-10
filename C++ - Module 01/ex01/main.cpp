//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 01:24:22 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/31 02:32:35 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(void)
{
	int i = 10;

	Zombie * horde = zombieHorde( i, "Mark" );

	for (int x = 0; x < i; x++)
		horde[x].announce();
	delete[] horde;
}