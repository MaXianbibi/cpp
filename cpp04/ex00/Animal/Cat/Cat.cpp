/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:19:45 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 12:11:21 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(Cat const &copy)
{
	std::cout << "Cat assignation operator called" << std::endl;
    if (this != &copy)
        type = copy.type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "MIAOU MIAOU !" << std::endl;
}

