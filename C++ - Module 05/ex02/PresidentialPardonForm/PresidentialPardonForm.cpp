/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:56:22 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/09 15:00:21 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
	_target = "Default";	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Parametric constructor called" << std::endl;
	_target = target;	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) : AForm(copy.getName(), copy.getGradeSign(), copy.getGradeExec())
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	*this = copy;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & copy)
{
	std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
	if (this != &copy)
	{
		_target = copy.getTarget();
		this->_signed = copy.getSigned();
	}
	return (*this);
}

const std::string	&PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_gradeExec)
		throw AForm::GradeTooLowException();
	else if (this->_signed == false)
		throw AForm::FormNotSignedException();
	else
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}