/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:32:33 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/06 15:28:45 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
protected:
	const std::string	_name;	
	bool 				_signed;
	const unsigned int	_gradeSign;
	const unsigned int	_gradeExec;
public:
	AForm();

	AForm(const std::string name, const unsigned int gradeSign, const unsigned int gradeExec);
	AForm(AForm const & copy);
	AForm & operator=(AForm const & copy);

	virtual	~AForm();

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

	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	const std::string	&getName() const;
	const bool			&getSigned() const;
	const unsigned int	&getGradeSign() const;
	const unsigned int	&getGradeExec() const;

	void				beSigned(const Bureaucrat & b);

	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#endif