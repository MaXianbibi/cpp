/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:06:25 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/22 17:17:42 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include <string>
#include <deque>
#include <list>
#include "PmergeMe.hpp"




int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cerr << "Usage: ./PmergeMe [n1] [...]" << std::endl;
		return (1);
	}

	PmergeMe *ok;
	try
	{
		ok = new PmergeMe(argv);

	
		std::deque<int>		deque = ok->getDeque();
		std::cout << "Before: ";
		for (size_t i = 0; i < deque.size(); i++)
		{
			if (i == 5)
			{
				std::cout << "[...]";
				break;
			}
			std::cout << deque.at(i) << " ";
		}
		std::cout << std::endl;
	}
	catch(...)
	{
		std::cerr << "Error" << '\n';
		return (1);
	}
	ok->sort(&PmergeMe::sortDeque);
	ok->sort(&PmergeMe::sortList);
	delete ok;
}