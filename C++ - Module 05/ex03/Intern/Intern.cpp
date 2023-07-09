/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:18:34 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/09 15:31:01 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	std::cout << "Intern Copy constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

Intern &		Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	std::cout << "Intern Assignation operator called" << std::endl;
	return (*this);
}

AForm * makeShrubberyCreationForm(const std::string name,  const std::string target)
{
	if (name == "ShrubberyCreationForm")
		return (new ShrubberyCreationForm(target));
	return (NULL);
}

AForm * makeRobotomyRequestForm(const std::string name,  const std::string target)
{
	if (name == "RobotomyRequestForm")
		return (new RobotomyRequestForm(target));
	return (makeShrubberyCreationForm(name, target));
}

AForm * makePresidentialPardonForm(const std::string name,  const std::string target)
{
	if (name == "PresidentialPardonForm")
		return (new PresidentialPardonForm(target));
	return (makeRobotomyRequestForm(name, target));
}



AForm * Intern::makeForm(std::string name, std::string target)
{
	AForm * form = makePresidentialPardonForm(name, target);
	if (form == NULL)
		std::cout << "Intern can't create " << name << " form" << std::endl;
	else
		std::cout << "Intern creates " << name << " form" << std::endl;
	return (form);
}