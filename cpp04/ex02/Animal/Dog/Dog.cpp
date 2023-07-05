/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:21:16 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 12:39:23 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	brain = new Brain();
    type = "Dog";
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(Dog const &copy)
{
	std::cout << "Dog assignation operator called" << std::endl;
    if (this != &copy)
	{
    	type = copy.type;
		*brain = *copy.brain;	
	}
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "WOUF WOUF !" << std::endl;
}