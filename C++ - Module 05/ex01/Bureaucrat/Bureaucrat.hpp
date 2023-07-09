/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:19:15 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/06 15:04:52 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	unsigned int		_grade;
public:
	Bureaucrat();
	~Bureaucrat();

	Bureaucrat(const std::string name, const unsigned int grade);
	Bureaucrat(Bureaucrat const & copy);
	Bureaucrat & operator=(Bureaucrat const & copy);
	
	const std::string	&getName() const;
	const unsigned int	&getGrade() const;

	void				incrementGrade();
	void				decrementGrade();


	// exception 

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

	void signForm(Form & f);
	

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);


#endif