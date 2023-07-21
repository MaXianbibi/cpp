/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:22:52 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/11 16:11:26 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>

int main(void)
{
	std::cout << "\033[1;93;4mTEST 1 :\033[0m" << std::endl;
	{
		Span sp = Span(5);
		try
		{
			sp.addNumber(1000000);
			sp.addNumber(200);
			sp.addNumber(10);
			sp.addNumber(3000);
			sp.addNumber(400);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		try
		{
			sp.addNumber(1);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "\033[1;93;4mTEST 2 :\033[0m" << std::endl;
	{
		std::vector<int> v(6);
		v.at(0) = 1000000;
		v.at(1) = 200;
		v.at(2) = 10;
		v.at(3) = 3000;
		v.at(4) = 400;
		v.at(5) = 1;
		
		
		Span sp = Span(5);
		try
		{
			sp.fillArray(v.begin(), v.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}