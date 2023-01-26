/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 01:24:22 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 00:43:43 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./zombie.hpp"

int main(void)
{
	Zombie zombie1("Bob");

	zombie1.announce();
	zombie1.randomChump("RandomChump");
	
	Zombie *zombie2 = zombie1.newZombie("Kak");

	zombie2->announce();
	zombie2->randomChump("RandomChump");
	delete zombie2;
	
	
}