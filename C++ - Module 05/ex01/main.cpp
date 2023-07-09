/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:29:48 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/06 15:16:22 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"
#include "Form/Form.hpp"

int main(void)
{

	std::cout << "\033[1;93;4mTEST 1 :\033[0m" << std::endl;
	try
	{
		Form f("Form", 10, 10);
		Bureaucrat Jean("Jean", 10);

		std::cout << std::endl;

		std::cout << f << std::endl;
		std::cout << Jean << std::endl
				  << std::endl;

		Jean.signForm(f);
		std::cout << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl << "-------------------------------------" << std::endl << std::endl << std::endl;

	std::cout << "\033[1;93;4mTEST 2 :\033[0m" << std::endl;
	try
	{
	
			
		Form f("Form", 10, 10);
		Bureaucrat Jean("Jean", 150);

		std::cout << std::endl;

		std::cout << f << std::endl;
		std::cout << Jean << std::endl
				  << std::endl;

		Jean.signForm(f);
		std::cout << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl << std::endl << "-------------------------------------" << std::endl << std::endl << std::endl;

	std::cout << "\033[1;93;4mTEST 3 :\033[0m" << std::endl;
	try
	{
		Form f("Form", 0, 10);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl << "-------------------------------------" << std::endl << std::endl << std::endl;

	std::cout << "\033[1;93;4mTEST 4 :\033[0m" << std::endl;

	try
	{
		Form f("Form", 151, 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	
	return (0);
}