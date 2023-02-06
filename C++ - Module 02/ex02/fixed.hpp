/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 07:53:56 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/06 11:12:15 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class fixed
{
private:
	int value;
	static const int fract = 8;
public:
	fixed();
	fixed(const fixed &copy);
	fixed(const int number);
	fixed(const float number);
	fixed	&operator=(const fixed &copy);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

	static const fixed & min(fixed const &copy1, fixed const &copy2);
	static const fixed & max(fixed const &copy1, fixed const &copy2);
	static fixed & min_nconst(fixed &copy1, fixed &copy2);
	static fixed & max_nconst(fixed &copy1, fixed &copy2);
	
	~fixed();
};

std::ostream	&operator<<(std::ostream &str, fixed const &fixed_nbr);
fixed	operator+(fixed const &fixedU, fixed const &fixedD);
fixed	operator-(fixed const &fixedU, fixed const &fixedD);
fixed	operator*(fixed const &fixedU, fixed const &fixedD);
fixed	operator/(fixed const &fixedU, fixed const &fixedD);
int	operator==(fixed const &fixedU, fixed const &fixedD);
int	operator!=(fixed const &fixedU, fixed const &fixedD);
int	operator<=(fixed const &fixedU, fixed const &fixedD);
int	operator>=(fixed const &fixedU, fixed const &fixedD);
int	operator>(fixed const &fixedU, fixed const &fixedD);
int	operator<(fixed const &fixedU, fixed const &fixedD);
fixed & operator++( fixed & U );
fixed &  operator--( fixed & U );
fixed operator++(fixed &U, int);
fixed operator--(fixed &U, int);

#endif