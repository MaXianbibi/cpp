/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:29:48 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/06 14:27:57 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"

int main(void)
{

	std::cout << "\033[1;93;4mTEST 1 :\033[0m" << std::endl;
	{
		try
		{
			Bureaucrat b("Jean", 21);
			std::cout << b << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl << std::endl << "-------------------------------------" << std::endl << std::endl << std::endl;
	
	std::cout << "\033[1;93;4mTEST 2 :\033[0m" << std::endl;
	{
		try
		{
			Bureaucrat b("Jean", 0);
			std::cout << b << std::endl;

		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << std::endl << "-------------------------------------" << std::endl << std::endl << std::endl;

	std::cout << "\033[1;93;4mTEST 3 :\033[0m" << std::endl;
	{
		try
		{
			Bureaucrat b("Jean", 151);
			std::cout << b << std::endl;

		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << std::endl << "-------------------------------------" << std::endl << std::endl << std::endl;

	std::cout << "\033[1;93;4mTEST 4 :\033[0m" << std::endl;
	{
		try
		{
			Bureaucrat b("Jean", 149);
			std::cout << b << std::endl;
			b.decrementGrade();
			std::cout << b << std::endl;
			b.decrementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << std::endl << "-------------------------------------" << std::endl << std::endl << std::endl;
	
	std::cout << "\033[1;93;4mTEST 5 :\033[0m" << std::endl;
	{
		try
		{
			Bureaucrat b("Jean", 2);
			std::cout << b << std::endl;
			b.incrementGrade();
			std::cout << b << std::endl;
			b.incrementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}