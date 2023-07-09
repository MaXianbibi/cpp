/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:24:12 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/09 14:38:17 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
	_target = "Default";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void ShrubberyCreationForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeSign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Parametric constructor called" << std::endl;
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm(copy.getName(), copy.getGradeSign(), copy.getGradeExec())
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
	std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
	if (this != &copy)
	{
		_target = copy.getTarget();
		this->_signed = copy.getSigned();
	}
	return (*this);
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{	
	if (executor.getGrade() > this->_gradeExec)
		throw AForm::GradeTooLowException();
	else if (!this->_signed)
		throw AForm::FormNotSignedException();

	std::ofstream file(_target + "_shrubbery");
	file << "                                                         . " << std::endl;
	file << "                                              .         ;   " << std::endl;
	file << "                 .              .              ;%     ;;    " << std::endl;
	file << "                   ,           ,                :;%  %;    " << std::endl;
	file << "                    :         ;                   :;%;'     .,    " << std::endl;
	file << "           ,.        %;     %;            ;        %;'    ,; " << std::endl;
	file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%' " << std::endl;
	file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'  " << std::endl;
	file << "               ;%;      %;        ;%;        % ;%;  ,%;' " << std::endl;
	file << "                `%;.     ;%;     %;'         `;%%;.%;' " << std::endl;
	file << "                 `:;%.    ;%%. %@;        %; ;@%;%' " << std::endl;
	file << "                    `:%;.  :;bd%;          %;@%;' " << std::endl;
	file << "                      `@%:.  :;%.         ;@@%;'    " << std::endl;
	file << "                        `@%.  `;@%.      ;@@%;          " << std::endl;
	file << "                          `@%%. `@%%    ;@@%;         " << std::endl;
	file << "                            ;@%. :@%%  %@@%;        " << std::endl;
	file << "                              %@bd%%%bd%%:;      " << std::endl;
	file << "                                #@%%%%%:;; " << std::endl;
	file << "                                %@@%%%::; " << std::endl;
	file << "                                %@@@%(o);  . '          " << std::endl;
	file << "                                %@@@o%;:(.,'          " << std::endl;
	file << "                            `.. %@@@o%::;          " << std::endl;
	file << "                               `)@@@o%::;          " << std::endl;
	file << "                                %@@(o)::;         " << std::endl;
	file << "                               .%@@@@%::;          " << std::endl;
	file << "                               ;%@@@@%::;.           " << std::endl;
	file << "                              ;%@@@@%%:;;;.  " << std::endl;
	file << "                          ...;%@@@@@%%:;;;;,..     " << std::endl;
	file.close();
}