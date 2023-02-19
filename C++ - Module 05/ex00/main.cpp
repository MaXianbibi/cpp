/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:40 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/16 16:58:11 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ( void )
{
	Bureaucrat * hello = NULL;

	try
	{
		hello = new Bureaucrat("bob", 50);
	}
	catch(Bureaucrat::Exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	if (hello)
	{
		std::cout << hello->getName() << std::endl;
		std::cout << hello->getGrade() << std::endl;


		try
		{
			hello->decreaseGrade(101);
		}	
		catch(Bureaucrat::Exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		std::cout << hello->getGrade() << std::endl;
		delete hello;
	}
}