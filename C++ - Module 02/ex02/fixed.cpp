/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 07:55:49 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/06 11:15:04 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

static	float ft_pow(float base, int exp)
{
	float	result;

	if (!exp)
		return (1);
	if (exp < 0)
	{
		base = 1 / base;
		exp *= -1;
	}
	result = base;
	while (--exp)
		result *= base;
	return (result);
}

fixed::fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

fixed::fixed(const fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

fixed::fixed(const int number) : value(number * ft_pow(2, fract))
{
	std::cout << "Fixed object created with int constructor" << std::endl; 
}

fixed::fixed(const float number) : value(number * ft_pow(2, fract))
{
	std::cout << "Fixed object created with float constructor" << std::endl; 
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

float fixed::toFloat( void ) const
{
	return (this->value * ft_pow(2, -this->fract));
}

int fixed::toInt( void ) const 
{
	return (this->value * ft_pow(2, -this->fract));
}

fixed::~fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream	&operator<<(std::ostream &str, fixed const &fixed_nbr) 
{
	return (str << fixed_nbr.toFloat());
}

fixed	operator+(fixed const &fixedU, fixed const &fixedD) 
{
	fixed result(fixedU.toFloat() + fixedD.toFloat());
	return (result);	
}

fixed	operator-(fixed const &fixedU, fixed const &fixedD) 
{
	fixed result(fixedU.toFloat() - fixedD.toFloat());
	return (result);
}

fixed	operator*(fixed const &fixedU, fixed const &fixedD) 
{
	fixed result(fixedU.toFloat() * fixedD.toFloat());
	return (result);
}

fixed	operator/(fixed const &fixedU, fixed const &fixedD) 
{
	fixed result(fixedU.toFloat() * fixedD.toFloat());
	return (result);
}

int	operator==(fixed const &fixedU, fixed const &fixedD) {
	return(fixedU.toFloat() == fixedD.toFloat());
}

int	operator!=(fixed const &fixedU, fixed const &fixedD) {
	return(fixedU.toFloat() != fixedD.toFloat());
}

int	operator<=(fixed const &fixedU, fixed const &fixedD) {
	return(fixedU.toFloat() <= fixedD.toFloat());
}

int	operator>=(fixed const &fixedU, fixed const &fixedD) {
	return(fixedU.toFloat() >= fixedD.toFloat());
}

int	operator>(fixed const &fixedU, fixed const &fixedD) {
	return(fixedU.toFloat() > fixedD.toFloat());
}

int	operator<(fixed const &fixedU, fixed const &fixedD) {
	return(fixedU.toFloat() < fixedD.toFloat());
}

fixed & operator++( fixed & U ) {
	U.setRawBits(U.getRawBits() + 1);
	return (U);
}

fixed &  operator--( fixed & U ) {
	U.setRawBits(U.getRawBits() - 1);
	return (U);
}

fixed operator++(fixed &U, int) {
	fixed tmp(U);
	++U;
	return(tmp);
}

fixed operator--(fixed &U, int) {
	fixed tmp(U);
	--U;
	return(tmp);
}

const fixed & fixed::min(fixed const &copy1, fixed const &copy2)
{
	if (copy1 < copy2)
		return copy1;
	return copy2;
}

const fixed & fixed::max(fixed const &copy1, fixed const &copy2)
{
	if (copy1 > copy2)
		return copy1;
	return copy2;
}

fixed & fixed::min_nconst(fixed  &copy1, fixed  &copy2)
{
	if (copy1 < copy2)
		return copy1;
	return copy2;
}

fixed & fixed::max_nconst(fixed  &copy1, fixed  &copy2)
{
	if (copy1 > copy2)
		return copy1;
	return copy2;
}



	
