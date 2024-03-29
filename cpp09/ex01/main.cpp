/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:18:13 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/22 13:45:37 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include <string>

#include "RPN.hpp"

int main(int argc, char **argv)
{
	std::array<std::string, 3> args;

	if (argc != 2)
	{
		std::cerr << "Usage: ./RPN [inverted Polish mathematical expression]" << std::endl;
		return (1);
	}


	RPN *ok;
	try 
	{
		ok = new RPN(argv[1]);
		std::cout << ok->getResult() << std::endl;
	} catch (const char *e)	{
		std::cerr << e << std::endl;
	}
	
		delete ok;
	return (0);
}