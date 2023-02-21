/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:24:56 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/19 03:09:44 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, const int _grade) : name(_name)
{
	if (_grade > 150)
		throw ( Bureaucrat::GradeTooLowException() );
	else if (_grade < 1)
		throw ( Bureaucrat::GradeTooHighException() );
	
	this->grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy)
{
	*this = copy;	
}

Bureaucrat::Bureaucrat() : name("Random"), grade(150)
{
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & copy)
{
	this->name = copy.getName();
	this->grade = copy.getGrade();

	return (*this);
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat& bureaucrat)
{

	// <name>, bureaucrat grade <grade>.
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
  }


Bureaucrat::~Bureaucrat()
{
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade 2 low !");	
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade 2 high !");	
}

const char * Bureaucrat::Exception::what() const throw()
{
	return ("Error ! ");
}

const std::string & Bureaucrat::getName( void ) const
{
	return (this->name);
}


const int & Bureaucrat::getGrade( void ) const
{
	return (this->grade);

}

void Bureaucrat::increaseGrade( const int n )
{
	if ( this->grade - n < 1 )
		throw (Bureaucrat::GradeTooHighException());
	
	this->grade -= n;
}

void Bureaucrat::decreaseGrade( const int n )
{
	if ( n + this->grade > 150 )
		throw (Bureaucrat::GradeTooLowException());
	
	this->grade += n;
}
