/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:23:40 by jmorneau          #+#    #+#             */
/*   Updated: 2023/02/26 13:58:05 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
#include "Form.hpp"

int main ( void )
{
	Bureaucrat ok("Random", 150);

	Bureaucrat Jean("Jean", 1);

	Bureaucrat Monsieur("Monsieur", 19);
	
	std::cout << ok << std::endl;
	std::cout << Monsieur << std::endl;
	std::cout << Jean << std::endl << std::endl;

	Form doc("Doc", 20, 20);

	std::cout << doc << std::endl << std::endl;

	ok.signForm(doc);
	
	std::cout << std::endl << doc << std::endl << std::endl ;

	Jean.signForm(doc);

	std::cout << std::endl << doc << std::endl << std::endl ;

	Monsieur.signForm(doc);
	
	

}