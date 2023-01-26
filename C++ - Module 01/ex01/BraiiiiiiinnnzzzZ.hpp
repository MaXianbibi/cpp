/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BraiiiiiiinnnzzzZ.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 01:26:44 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 00:24:21 by jmorneau         ###   ########.fr       */
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
		Zombie(){}
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
		void setName(std::string name) {
			this->name = name;
		}

	private:
		std::string name;
};

Zombie* zombieHorde( int N, std::string name );