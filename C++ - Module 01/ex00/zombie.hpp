/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BraiiiiiiinnnzzzZ.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 01:26:44 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 00:00:40 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <cstdio>
#include <iomanip>

class Zombie {
	public:
		Zombie( std::string name) : name(name) {
			
		}
		~Zombie(){
		}
		void announce(void) {
			std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
		}
		Zombie* newZombie( std::string 	name) {
				Zombie *zom = new Zombie(name);

				return (zom);
		}

		void randomChump(std::string name) {
			Zombie zom(name);
			
			zom.announce();
		}

	private:
		std::string name;

};