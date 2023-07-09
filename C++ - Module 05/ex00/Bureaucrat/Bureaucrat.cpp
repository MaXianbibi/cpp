/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:19:42 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/06 15:01:25 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;	
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;	
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) : _name(copy.getName()), _grade(copy.getGrade())
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;	
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & copy)
{
	std::cout << "Bureaucrat Assignation operator called" << std::endl;	
	if (this != &copy)
	{
		this->_grade = copy.getGrade();
	}
	return (*this);
}

Bureaucrat::Bureaucrat(const std::string name, const unsigned int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat Parametric constructor called" << std::endl;	
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

const std::string	&Bureaucrat::getName() const
{
	return (this->_name);
}

const unsigned int	&Bureaucrat::getGrade() const
{
	return (this->_grade);
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	// return RED	ERROR : Grade too high
	return ("\033[1;4;91mERROR : GRADE TOO HIGH\033[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[1;4;91mERROR : GRADE TOO LOW\033[0m");
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}
