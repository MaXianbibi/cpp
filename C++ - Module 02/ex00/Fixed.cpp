/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 07:55:49 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/05 08:36:56 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

fixed::fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

fixed::fixed(const fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}


fixed	&fixed::operator=(const fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;

	this->value = copy.getRawBits();
	return (*this);
}

int fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

fixed::~fixed()
{
	std::cout << "Destructor called" << std::endl;
}
