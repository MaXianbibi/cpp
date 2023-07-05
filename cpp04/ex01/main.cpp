/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:16:33 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 12:49:14 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal/Animal.hpp"
#include "Animal/Dog/Dog.hpp"
#include "Animal/Cat/Cat.hpp"

int main()
{
	std::cout << "\033[1;33m" << "Animal Test" << "\033[0m" << std::endl;
    {
		Animal *animals[20];
		for (int i = 0; i < 10; i++)
		{
			std::cout << "\033[1;33m" << "Dog " << i << "\033[0m" << std::endl;
			animals[i] = new Dog();
		}
		for (int i = 10; i < 20; i++)
		{
			std::cout << "\033[1;33m" << "Cat " << i - 10 << "\033[0m" << std::endl;
			animals[i] = new Cat();
		}
		for (int i = 0; i < 20; i++)
		{
			std::cout << "\033[1;31m" << "Deleting a : " << animals[i]->getType() << "\033[0m" << std::endl;
			delete animals[i];			
		}
	}

}