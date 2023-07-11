/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:11:28 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/11 14:44:08 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
	std::cout << "\033[1;93;4mTEST 1 :\033[0m" << std::endl;
	{
		Array<int> test;
		Array<int> test2(5);

		for (size_t i = 0; i < 5; i++)
		{
			std::cout << test2[i] << std::endl;
		}
	}
	
	std::cout << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	
	std::cout << "\033[1;93;4mTEST 2 :\033[0m" << std::endl;
	{
		Array<std::string> test(5);
		for (size_t i = 0; i < 5; i++)
		{
			test[i] = "Hello World !";
		}
		
		Array<std::string> copy(test);
		for (size_t i = 0; i < 6; i++)
		{
			try 
			{
				std::cout << copy[i] << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	
	}
	return (0);
}
