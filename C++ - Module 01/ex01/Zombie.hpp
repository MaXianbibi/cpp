/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 01:26:44 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/31 02:34:40 by justinmorne      ###   ########.fr       */
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
			std::cout << "deleted" << std::endl;
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