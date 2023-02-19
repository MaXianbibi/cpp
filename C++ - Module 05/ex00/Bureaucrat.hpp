/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:24:09 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/16 16:38:56 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
public:
	Bureaucrat(const std::string _name, const int _grade);
	~Bureaucrat();

	class Exception : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public Bureaucrat::Exception
	{
	public:
		const char *what() const throw();
	};
	
	class GradeTooHighException : public Bureaucrat::Exception
	{
	public:
		const char *what() const throw();
	};
	const std::string & getName( void ) const;
	const int & getGrade( void ) const;

	void increaseGrade( const int n );
	void decreaseGrade( const int n );

	const std::string name;
	int grade;
};

#endif