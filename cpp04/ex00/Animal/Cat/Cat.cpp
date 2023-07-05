/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:19:45 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 11:28:41 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
}

Cat::~Cat()
{
}

Cat::Cat(Cat const &copy)
{
    *this = copy;
}

Cat &Cat::operator=(Cat const &copy)
{
    if (this != &copy)
        type = copy.type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "MIAOU MIAOU !" << std::endl;
}

