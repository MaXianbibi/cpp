/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:44:29 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/09 14:53:48 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;	
	_target = "Default";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;	
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Parametric constructor called" << std::endl;	
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) : AForm(copy.getName(), copy.getGradeSign(), copy.getGradeExec())
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;	
	*this = copy;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & copy)
{
	std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;	
	if (this != &copy)
	{
		_target = copy.getTarget();
		this->_signed = copy.getSigned();
	}
	return (*this);
}

const std::string	&RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_gradeExec)
		throw AForm::GradeTooLowException();
	else if (this->_signed == false)
		throw AForm::FormNotSignedException();

	std::cout << "*drill noises*" << std::endl;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 10);

	int rnb = dis(gen);

	if (rnb & 1)
		std::cout << "Robotomy request has been successfuly executed on " << this->_target << std::endl;
	else
		std::cout << "Robotomy request has failed on " << this->_target << std::endl;
		
}