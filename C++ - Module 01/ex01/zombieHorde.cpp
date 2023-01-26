/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:06:29 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 00:23:30 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BraiiiiiiinnnzzzZ.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie * zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
	
}