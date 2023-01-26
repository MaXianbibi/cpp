/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 01:24:22 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 00:43:01 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(void)
{
	int i = 10;

	Zombie * horde = zombieHorde( i, "Mark" );

	for (int x = 0; x < i; x++)
		horde[x].announce();
}