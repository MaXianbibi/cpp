/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:29:48 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/09 15:43:03 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat/Bureaucrat.hpp"
#include "AForm/AForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"

#include "PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "Intern/Intern.hpp"

int main(void)
{
	std::cout << "\033[1;93;4mTEST 1 :\033[0m" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "TREE");
		std::cout << std::endl;
		std::cout << *rrf << std::endl;
		
		Bureaucrat b("Bureaucrat", 1);
		
		std::cout << std::endl;
		b.signForm(*rrf);
		std::cout << std::endl;
		b.executeForm(*rrf);
		std::cout << std::endl;
		
		
		delete rrf;
	}
	std::cout << std::endl;
	std::cout << std::endl << std::endl << "-------------------------------------" << std::endl << std::endl << std::endl;
	std::cout << "\033[1;93;4mTEST 2 :\033[0m" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		std::cout << std::endl;
		std::cout << *rrf << std::endl;
		
		Bureaucrat b("Bureaucrat", 1);
		
		std::cout << std::endl;
		b.signForm(*rrf);
		std::cout << std::endl;
		b.executeForm(*rrf);
		std::cout << std::endl;
		
		
		delete rrf;
	}
	std::cout << std::endl;
	std::cout << std::endl << std::endl << "-------------------------------------" << std::endl << std::endl << std::endl;
	std::cout << "\033[1;93;4mTEST 3 :\033[0m" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bobby");
		std::cout << std::endl;
		std::cout << *rrf << std::endl;
		
		Bureaucrat b("Bureaucrat", 1);
		
		std::cout << std::endl;
		b.signForm(*rrf);
		std::cout << std::endl;
		b.executeForm(*rrf);
		std::cout << std::endl;
		
		
		delete rrf;
	}
	std::cout << std::endl;
	std::cout << std::endl << std::endl << "-------------------------------------" << std::endl << std::endl << std::endl;
	std::cout << "\033[1;93;4mTEST 4 :\033[0m" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("FAILFORM", "Jean");
		if (!rrf)
			return (0);
	
		std::cout << std::endl;
		std::cout << *rrf << std::endl;
		
		Bureaucrat b("Bureaucrat", 1);
		
		std::cout << std::endl;
		b.signForm(*rrf);
		std::cout << std::endl;
		b.executeForm(*rrf);
		std::cout << std::endl;
		
		
		delete rrf;
	}
	

}