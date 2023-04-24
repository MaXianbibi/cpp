/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:24:09 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/27 14:09:45 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
private:

	std::string name;
	int grade;

public:
	Bureaucrat(const std::string _name, const int _grade);
	Bureaucrat();
	Bureaucrat(const Bureaucrat & copy);
	Bureaucrat &operator=(const Bureaucrat & copy);
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

	void signForm(Form & form);
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat& bureaucrat);

#endif


//                    /\                    
//                   /  \                   
//                  /    \                  
//                 /      \                 
//                /        \                
//               /          \               
//              /            \              
//             /              \             
//            /                \            
//           /                  \           
//          /                    \          
//         /                      \         
//        /                        \        
//       /                          \       
//      /                            \      
//     /                              \     
//    /                                \    
//   /                                  \   
//  /                                    \  
// /                                      \ 
//                 ||                    
//                 ||                    
//                 ||                    
//                 ||                    
//                 ||                    
//                 ||                    
//               ======                  
//               ||   ||                  
//               ||   ||                  
//               ||   ||                  
//               ||   ||                  
//               ||   ||                  
//               ||   ||                  
//             ||||||||||||               
