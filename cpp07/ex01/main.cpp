/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:11:28 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/11 13:23:11 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>

template <typename T>
void print(T const &str)
{
	std::cout << str << std::endl;
}

template <typename T>
void multiply(T const &i)
{
	std::cout << i * 2 << std::endl;
}

int main(void)
{
	std::cout << "\033[1;93;4mTEST 1 :\033[0m" << std::endl;
	{
		std::string *test = new std::string[5];
		test[0] = "test1";
		test[1] = "test";
		test[2] = "test3";
		test[3] = "test4";
		test[4] = "test5";

		std::cout << "Print string array" << std::endl;
		iter(test, 5, print);
		delete[] test;
	}
	std::cout << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "\033[1;93;4mTEST 2 :\033[0m" << std::endl;
	{
		int *test = new int[5];
		test[0] = 1;
		test[1] = 2;
		test[2] = 3;
		test[3] = 4;
		test[4] = 5;

		std::cout << "Print int array" << std::endl;
		iter(test, 5, print);
		std::cout << "Multiply int array" << std::endl;
		iter(test, 5, multiply);

		delete[] test;
	}
	std::cout << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "\033[1;93;4mTEST 3 :\033[0m" << std::endl;
	{
		float *test = new float[5];
		test[0] = 1.1f;
		test[1] = 2.2f;
		test[2] = 3.3f;
		test[3] = 4.4f;
		test[4] = 5.5f;

		std::cout << "Print float array" << std::endl;
		iter(test, 5, print);
		std::cout << "Multiply float array" << std::endl;
		iter(test, 5, multiply);

		delete[] test;
	}
	

}
