/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:32:35 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/06 15:08:31 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

Form::Form() : _name("Default"), _signed(false), _gradeSign(150), _gradeExec(150)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

Form::Form(const std::string name, const unsigned int gradeSign, const unsigned int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "Form Parametric constructor called" << std::endl;
	if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw Form::GradeTooLowException();
	else if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw Form::GradeTooHighException();
}

Form & Form::operator=(Form const & copy)
{
	std::cout << "Form Assignation operator called" << std::endl;
	if (this != &copy)
	{
		this->_signed = copy.getSigned();
	}
	return (*this);
}

Form::Form(Form const & copy) : _name(copy.getName()), _signed(copy.getSigned()), _gradeSign(copy.getGradeSign()), _gradeExec(copy.getGradeExec())
{
	std::cout << "Form Copy constructor called" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("\033[1;4;91mERROR : GRADE TOO HIGH\033[0m");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("\033[1;4;91mERROR : GRADE TOO LOW\033[0m");
}

const std::string	&Form::getName() const
{
	return (this->_name);
}

const bool			&Form::getSigned() const
{
	return (this->_signed);
}

const unsigned int	&Form::getGradeSign() const
{
	return (this->_gradeSign);
}

const unsigned int	&Form::getGradeExec() const
{
	return (this->_gradeExec);
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	o << "Name : " << rhs.getName() << std::endl;
	o << "Is signed : " << ((rhs.getSigned()) ? "Yes" : "No") << std::endl;
	o << "Grade to sign : " << rhs.getGradeSign() << std::endl;
	o << "Grade to execute : " << rhs.getGradeExec() << std::endl;
	return (o);
}

void Form::beSigned(const Bureaucrat & b)
{
	if (b.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

