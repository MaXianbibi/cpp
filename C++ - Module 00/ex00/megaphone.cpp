/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:24:34 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/25 23:12:09 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>

int main(int argc, char **argv)
{
	std::string args[argc];

	int i = 1;
	while (i < argc)
	{
		args[i - 1] = argv[i];
		i++;
	}

	if (argc > 1)
		for (int i = 0; i < argc; i++)
		{
			for (unsigned int j = 0; j < args[i].length(); j++)
				std::cout << (char)std::toupper(args[i][j]);
			std::cout << " ";
		}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}