/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:32:33 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/06 15:06:53 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
private:
	const std::string	_name;	
	bool 				_signed;
	const unsigned int	_gradeSign;
	const unsigned int	_gradeExec;
public:
	Form();

	Form(const std::string name, const unsigned int gradeSign, const unsigned int gradeExec);
	Form(Form const & copy);
	Form & operator=(Form const & copy);

	~Form();

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	const std::string	&getName() const;
	const bool			&getSigned() const;
	const unsigned int	&getGradeSign() const;
	const unsigned int	&getGradeExec() const;

	void				beSigned(const Bureaucrat & b);
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif