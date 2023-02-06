/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 07:53:56 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/05 08:40:30 by jmorneau         ###   ########.fr       */
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
	~fixed();
};




#endif