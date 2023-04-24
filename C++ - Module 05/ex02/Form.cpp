/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 03:12:12 by justinmorne       #+#    #+#             */
/*   Updated: 2023/02/26 14:00:43 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Blank"), grade_ex(150), grade_sign(150), sign(0)
{
}

Form::Form(const std::string _name, const int _grade_ex, const int _grade_sign) : name(_name), grade_ex(_grade_ex), grade_sign(_grade_sign), sign(0)
{

	if (_grade_ex > 150 || _grade_sign > 150)
		throw(Form::GradeTooLowException());
	else if (_grade_ex < 1 || _grade_sign < 1)
		throw(Form::GradeTooHighException());
}

Form::~Form()
{
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("grade 2 low !");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("grade 2 high !");
}

const char *Form::Exception::what() const throw()
{
	return ("Already Signed ! ");
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{

	os << "Name : " << form.name << ", is it signed : " << ((form.sign) ? "Yes" : "No") << ", Grade pour signer : "
	   << form.grade_sign << ", Grade pour executer : " << form.grade_ex;
	return os;
}


void Form::beSigned(const Bureaucrat &bob)
{
	if (this->sign)
		throw (Form::Exception() );
	if (bob.getGrade() <= this->grade_sign)
		this->sign = 1;
	else
		throw(Form::GradeTooLowException());
}

const std::string &Form::getName(void) const
{
	return (this->name);
}

const bool &Form::isItSigned(void) const
{
	return (this->sign);
}
