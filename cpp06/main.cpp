/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:49:36 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/10 13:26:53 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


bool isChar(std::string str)
{
	if (!isdigit(str[0]) && str[1] == '\0')
		return (true);
	return (false);
}

bool isInt(std::string str)
{
	int i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool isFloat(std::string str)
{
	int i = 0;
	bool dot = false;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
		{
			if (str[i] == '.' && !dot && str[i + 1] != '\0')
				dot = true;
			else if(str[i] == 'f' && str[i + 1] == '\0' && dot)
				return (true);
			else
				return (false);
		}
		i++;
	}
	return (false);
}

bool isDouble(std::string str)
{
	int i = 0;
	bool dot = false;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
		{
			if (str[i] == '.' && !dot && str[i + 1] != '\0')
				dot = true;
			else
				return (false);
		}
		i++;
	}
	return (true);	
}

void convert(std::string litteral, int mask)
{
	if (mask & 0b0001)
	{
		char c = litteral[0];
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
	else if (mask & 0b0010)
	{
		int i = 0;
		try 
		{
			i = std::stoi(litteral);
		}
		catch (...)
		{
			litteral = "overflow";
		}
		
		std::cout << "char: " << ((isprint(i)) ? std::string(1, static_cast<char>(i)) : "Non displayable") << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	}
	else if (mask & 0b0100)
	{
		float f = 0;
		try 
		{
			f = std::stof(litteral);	
		}
		catch (...)
		{
			litteral = "overflow";
		}
		std::cout << "char: " << ((isprint(f)) ? std::string(1, static_cast<char>(f)) : "Non displayable") << std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;

		if (f - static_cast<int>(f) == 0)
			std::cout << "float: " << f << ".0f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;
		
		if (f - static_cast<int>(f) == 0)
			std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(f) << std::endl;

	}
	else if (mask & 0b1000)
	{
		double d = 0;
		try 
		{
			d = std::stod(litteral);
		}
		catch (...)
		{
			litteral = "overflow";
		}
		std::cout << "char: " << ((isprint(d)) ? std::string(1, static_cast<char>(d)) : "Non displayable") << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		if (d - static_cast<int>(d) == 0)
			std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
			

		if (d - static_cast<int>(d) == 0)
			std::cout << "double: " << d << ".0" << std::endl;
		else
			std::cout << "double: " << d << std::endl;
	}	
	
}

void checkInf(std::string literal)
{
	if (literal == "inf" || literal == "inff" || literal == "infl" || literal == "+inf" || literal == "+inff" || literal == "+infl")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << "inff" << std::endl;
        std::cout << "double: " << "inf" << std::endl;
        exit(0);
    }
    else if (literal == "-inf" || literal == "-inff" || literal == "-infl")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << "-inff" << std::endl;
        std::cout << "double: " << "-inf" << std::endl;
        exit(0);
    }
	else if (literal == "nan" || literal == "nanf")
	{
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << "nanf" << std::endl;
        std::cout << "double: " << "nan" << std::endl;
		exit(0);
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "One argument needed" << std::endl;
		return (0);
	}
	std::string str(argv[1]);

	checkInf(str);
	int mask;
	if (isChar(str))
		mask = 0b0001;
	else if (isInt(str))
		mask = 0b0010;
	else if (isFloat(str))
		mask = 0b0100;
	else if (isDouble(str))
		mask = 0b1000;
	else
	{
		std::cout << "Not a valid litteral" << std::endl;
		return (0);
	}
	convert(str, mask);
	return (0);
}