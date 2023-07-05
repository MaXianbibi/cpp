/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:18:18 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 11:27:51 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
}

Animal::~Animal()
{
}

Animal::Animal(Animal const &copy)
{
    *this = copy;
}

Animal &Animal::operator=(Animal const &copy)
{
    if (this != &copy)
        type = copy.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "*Animal sound*" << std::endl;
}