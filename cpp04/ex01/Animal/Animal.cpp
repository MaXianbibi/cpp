/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:18:18 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 12:10:35 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
    type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(Animal const &copy)
{
	std::cout << "Animal assignation operator called" << std::endl;
    if (this != &copy)
        type = copy.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "*Animal sound*" << std::endl;
}

std::string    Animal::getType() const
{
	return (type);
}