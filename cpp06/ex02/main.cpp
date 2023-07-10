/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:57:51 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/10 14:10:58 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <ctime>
#include <random>

Base *make_a(void)
{
	return new A;
}

Base *make_b(void)
{
	return new B;
}

Base *make_c(void)
{
	return new C;
}

Base * generate(void)
{
    Base *(*f[3])() = {make_a, make_c, make_b};
    return f[rand() % 3]();
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
	
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (std::bad_cast &bc)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
			(void)b;
		}
		catch (std::bad_cast &bc)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
				(void)c;
			}
			catch (std::bad_cast &bc)
			{
				std::cout << "Error" << std::endl;
			}
		}
	}
}

int main(void)
{
 	srand(time(0));

	Base *test1 = generate();
	Base *test2 = generate();
	


	identify(test1);
	identify(test2);

	// reference
	identify(*test1);
	identify(*test2);

	
	
}