/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 03:12:12 by justinmorne       #+#    #+#             */
/*   Updated: 2023/02/19 03:25:08 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("random"), grade_ex(20), grade_sign(20), sign(0)
{
}

Form::Form(const std::string _name, const int _grade_ex, const int _grade_sign) : name(_name), grade_ex(_grade_ex), grade_sign(_grade_sign)
{

    (void)this->name;
    (void)this->grade_ex;
    (void)this->grade_sign;
    (void)sign;

    
}

Form::~Form()
{
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("grade 2 low !");	
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("grade 2 high !");	
}

const char * Form::Exception::what() const throw()
{
	return ("Error ! ");
}
