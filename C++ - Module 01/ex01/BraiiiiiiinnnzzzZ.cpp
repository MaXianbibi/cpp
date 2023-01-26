/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BraiiiiiiinnnzzzZ.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 01:24:22 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 00:23:33 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BraiiiiiiinnnzzzZ.hpp"

int main(void)
{
	
	Zombie * horde = zombieHorde( 3, "mark" );

	horde[0].announce();
}