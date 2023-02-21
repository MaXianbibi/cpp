/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:40 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/19 03:10:14 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ( void )
{
	Bureaucrat * hello = NULL;

	try
	{
		hello = new Bureaucrat("Bob", 20);
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
		std::cout << *hello << std::endl;
		delete hello;
	}
}