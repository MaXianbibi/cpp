/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:29:48 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/09 15:09:12 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"
#include "AForm/AForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"

#include "PresidentialPardonForm/PresidentialPardonForm.hpp"

int main(void)
{

	std::cout << "\033[1;93;4mTEST 1 : SUCESS \033[0m" << std::endl;
	{
		ShrubberyCreationForm form("test_1");
		Bureaucrat bob("Bob", 1);

		std::cout << std::endl;

		bob.signForm(form);

		std::cout << std::endl;
		
		bob.executeForm(form);
		
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "\033[1;93;4mTEST 1 : FAIL \033[0m" << std::endl;
	{
		ShrubberyCreationForm form("test_1");
		Bureaucrat bob("Bob", 150);

		std::cout << std::endl;

		bob.signForm(form);

		std::cout << std::endl;
		
		bob.executeForm(form);
		
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "\033[1;93;4mTEST 1 : FAIL 2 \033[0m" << std::endl;
	{
		ShrubberyCreationForm form("test_1");
		Bureaucrat bob("Bob", 1);

		// std::cout << std::endl;

		// bob.signForm(form);

		std::cout << std::endl;
		
		bob.executeForm(form);
		
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "\033[1;93;4mTEST 2 : SUCESS\033[0m" << std::endl;
	{
		RobotomyRequestForm form("test_2");
		Bureaucrat bob("Bob", 1);

		std::cout << std::endl;

		bob.signForm(form);

		std::cout << std::endl;
		
		bob.executeForm(form);
		
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "\033[1;93;4mTEST 2 : FAIL\033[0m" << std::endl;
	{
		RobotomyRequestForm form("test_2");
		Bureaucrat bob("Bob", 150);

		std::cout << std::endl;

		bob.signForm(form);

		std::cout << std::endl;
		
		bob.executeForm(form);
		
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "\033[1;93;4mTEST 2 : FAIL 2\033[0m" << std::endl;
	{
		RobotomyRequestForm form("test_2");
		Bureaucrat bob("Bob", 1);

		// std::cout << std::endl;

		// bob.signForm(form);

		std::cout << std::endl;
		
		bob.executeForm(form);
		
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "\033[1;93;4mTEST 3 : SUCESS\033[0m" << std::endl;
	{
		PresidentialPardonForm form("test_3");
		Bureaucrat bob("Bob", 1);

		std::cout << std::endl;

		bob.signForm(form);

		std::cout << std::endl;
		
		bob.executeForm(form);
		
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "\033[1;93;4mTEST 3 : FAIL\033[0m" << std::endl;
	{
		PresidentialPardonForm form("test_3");
		Bureaucrat bob("Bob", 150);

		std::cout << std::endl;

		bob.signForm(form);

		std::cout << std::endl;
		
		bob.executeForm(form);
		
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "\033[1;93;4mTEST 3 : FAIL 2\033[0m" << std::endl;
	{
		PresidentialPardonForm form("test_3");
		Bureaucrat bob("Bob", 1);

		// std::cout << std::endl;

		// bob.signForm(form);

		std::cout << std::endl;
		
		bob.executeForm(form);
		
		std::cout << std::endl;
	}
	return (0);
}