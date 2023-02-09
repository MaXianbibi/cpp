/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:24:56 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/09 15:22:24 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, const int _grade) : name(_name)
{
	if (_grade > 150)
		throw ( Bureaucrat::GradeTooHighException() );
	else if (_grade < 1)
		throw ( Bureaucrat::GradeTooLowException() );
	
	this->grade = _grade;
}

Bureaucrat::~Bureaucrat()
{
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	std::cout << "test" << std::endl;

	return ("grade 2 low !");
	
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade 2 high !");	
}

const char * Bureaucrat::Exception::what() const throw()
{
	return ("idk");
}
