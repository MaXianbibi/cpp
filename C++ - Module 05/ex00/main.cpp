/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:40 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/09 15:26:06 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ( void )
{
	try
	{
		Bureaucrat hello("bob", 151);
	}
	catch(Bureaucrat::Exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
}