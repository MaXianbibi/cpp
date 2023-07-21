/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:20:42 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/20 22:44:35 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	std::ifstream		file;

	BitcoinExchange		*exchange;
	try
	{
		if (argc != 2)
			throw std::string("Error: Invalid number of arguments");

		// data file
		file.open("data.csv");
		if (!file.is_open())
			throw std::string("Error: File not found");
		
		// input file
		exchange = new BitcoinExchange(argv[1]);
	}	catch (std::string &e) {
		std::cerr << e << std::endl;
		file.close();
		return (1);
	}
	catch (...)
	{
		std::cerr << "Error: Unknown" << std::endl;
		file.close();
		return (1);
	}

	
	std::vector<std::string>		data;
	std::string						line;
	std::getline(file, line);
	while(std::getline(file, line))
		data.push_back(line);

	
	exchange->parseBitcoin();

	exchange->dataXinput(data);
	file.close();
	delete exchange;
	return (0);
}