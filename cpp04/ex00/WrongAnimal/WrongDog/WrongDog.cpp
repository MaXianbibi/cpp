/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:21:16 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 12:10:52 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	std::cout << "WrongDog constructor called" << std::endl;
    type = "WrongDog";
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog::WrongDog(WrongDog const &copy)
{
	std::cout << "WrongDog copy constructor called" << std::endl;
    *this = copy;
}

WrongDog &WrongDog::operator=(WrongDog const &copy)
{
	std::cout << "WrongDog assignation operator called" << std::endl;
    if (this != &copy)
        type = copy.type;
    return (*this);
}

void    WrongDog::makeSound() const
{
    std::cout << "WOUF WOUF !" << std::endl;
}