/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:16:33 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 13:12:18 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "Animal/Dog/Dog.hpp"
#include "Animal/Cat/Cat.hpp"

int main()
{
	std::cout << "\033[1;33m" << "Animal Test" << "\033[0m" << std::endl;
    {
		
		// const Animal* meta = new Animal(); // Animal is now abstract
		// Animal meta;
		
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		delete j;
		delete i;
	}
}