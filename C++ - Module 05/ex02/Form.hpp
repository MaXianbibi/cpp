/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 03:11:26 by justinmorne       #+#    #+#             */
/*   Updated: 2023/02/27 13:52:31 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
private:
    const std::string name;
    const int grade_ex;
    const int grade_sign;
    bool sign;
    
public:
    Form();
    ~Form();

    Form(const std::string _name, const int _grade_ex, const int _grade_sign);

    class Exception : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	
	class GradeTooLowException : public Form::Exception
	{
	public:
		const char *what() const throw();
	};
	
	class GradeTooHighException : public Form::Exception
	{
	public:
		const char *what() const throw();
	};

	void beSigned(const Bureaucrat & bob);
	const std::string & getName( void ) const;
	const bool &isItSigned(void) const;

	friend std::ostream & operator<<(std::ostream & os, const Form& bureaucrat);
	
};



// Un name (nom) constant.
// • Un booléen indiquant si le formulaire est signé (à la construction, il ne l’est pas).
// • Un grade (échelon) constant requis pour le signer.
// • Un grade (échelon) constant requis pour l’exécuter



#endif