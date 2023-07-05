/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:21:16 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 11:28:28 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
}

Dog::~Dog()
{
}

Dog::Dog(Dog const &copy)
{
    *this = copy;
}

Dog &Dog::operator=(Dog const &copy)
{
    if (this != &copy)
        type = copy.type;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "WOUF WOUF !" << std::endl;
}