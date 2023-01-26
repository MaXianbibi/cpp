/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:27:15 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/26 00:37:09 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void ) {
	
	std::string str = "HI THIS IS BRAIN";

	std::string * stringPTR = &str;
	std::string &stringREF = str;
	
	

	std::cout << "L'adresse de la string en mémoire : " << &str << std::endl; 
	std::cout << "L'adresse stockée dans stringPTR : " << &stringPTR << std::endl;
	std::cout << "L'adresse stockée dans stringREF : " << &stringREF << std::endl;

	
	std::cout << "La valeur de la string : " << str << std::endl; 
	std::cout << "La valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF : " << stringREF << std::endl;
	
	
}