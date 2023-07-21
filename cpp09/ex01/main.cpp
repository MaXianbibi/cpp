/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:18:13 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/21 00:29:59 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include <string>


int main(int argc, char **argv)
{
	std::array<std::string, 3> args;

	if (argc != 4)
	{
		std::cerr << "Usage: ./RPN [inverted Polish mathematical expression]" << std::endl;
		return (1);
	}

	
	(void)argv;
	(void)args;
	return (0);
}