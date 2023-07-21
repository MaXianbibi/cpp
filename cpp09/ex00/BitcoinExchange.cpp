/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:41:39 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/20 23:38:30 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "Date.hpp"

BitcoinExchange::BitcoinExchange(std::string file_name)
{
	std::ifstream file;

	file.open(file_name);
	if (!file.is_open())
	{
		throw(std::string(file_name + " not found"));
	}
	std::string line;
	while (std::getline(file, line))
	{
		if (line.size() > 0)
		{
			_input.push_back(line);
			_exchange_rate.push_back(0);
		}
	}
	file.close();
}

BitcoinExchange::~BitcoinExchange(void)
{
}

const std::vector<std::string> &BitcoinExchange::getInput(void)
{
	return (_input);
}

int dateParsing(const std::string &date)
{

	size_t pos = date.find("-");
	if (pos == std::string::npos)
		return (-1);
	std::string year = date.substr(0, pos);
	try
	{
		std::stoi(year);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
	std::string month = date.substr(pos + 1, date.find("-", pos + 1));
	try
	{
		int monthInt = std::stoi(month);
		if (monthInt < 1 || monthInt > 12)
			return (-1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
	std::string day = date.substr(date.find("-", pos + 1) + 1, date.size());
	try
	{
		int dayInt = std::stoi(day);
		if (dayInt < 1 || dayInt > 31)
			return (-1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
	if (date.find("-", date.find("-", pos + 1) + 1) != std::string::npos)
		return (-1);

	return (0);
}

void BitcoinExchange::parseBitcoin(void)
{
	uint32_t i = 0;

	if (_input.at(i) == "date | value")
		i++;
	for (; i < _input.size(); i++)
	{
		size_t pos = _input.at(i).find("|");
		std::string date = _input.at(i).substr(0, pos);

		if (dateParsing(date) == -1 || pos == std::string::npos)
		{
			_input.at(i) = ("Error: bad input => " + date);
			_exchange_rate.at(i) = -1;
		}
		else
		{
			try
			{
				float value = std::stof(_input.at(i).substr(pos + 1));
				_exchange_rate.at(i) = value;
				if (value < 0)
					_input.at(i) = "Error: Value must be positive => " + _input.at(i);
			}
			catch (std::exception &e)
			{
				_input.at(i) = "Error: Value is not allowed => " + _input.at(i);
			}
		}
		// std::cout << _input.at(i) << std::endl;
	}
}

// binary search
// int findDate(const std::string &date, const std::vector<std::string> &data, int start, int end, int count)
// {
//     if (start > end)
//     {
//         return -1; // ou vous pourriez renvoyer `end` si vous voulez la date la plus proche en dessous
//     }

//     int mid = start + (end - start) / 2;

//     if (++count > 30)
//         return mid;

//     std::cout << data.at(mid) << std::endl;
//     Date targetDate(date);
//     Date midDate(data.at(mid).substr(0, data.at(mid).find(",")));

//     int comparison = compareDate(targetDate, midDate);
//     std::cout << targetDate.getDate() << " " << midDate.getDate() << " " << comparison << std::endl;
//     if (comparison == 0)
//     {
//         return mid;
//     }
//     else if (comparison == -1)
//     {
//         return findDate(date, data, mid, end, count);
//     }
//     else
//     {
//         return findDate(date, data, start, mid - 1, count);
//     }
// }

// Simple.
int findDate(const std::string &date, const std::vector<std::string> &data)
{
	Date targetDate(date);

	for (size_t i = 0; i < data.size(); i++)
	{
		Date midDate(data.at(i).substr(0, data.at(i).find(",")));

		if (compareDate(targetDate, midDate) == 0)
			return (i);
		else if (compareDate(targetDate, midDate) == 1)
			return (i - 1);
	}
	return (data.size() - 1);
}

void BitcoinExchange::dataXinput(const std::vector<std::string> data)
{
	uint32_t i = 0;

	if (_input.at(i) == "date | value")
		i++;
	for (; i < _input.size(); i++)
	{
		if (_input.at(i).at(0) == 'E')
		{
			std::cout << _input.at(i) << std::endl;
			continue;
		}
		size_t pos = _input.at(i).find("|");
		if (pos == std::string::npos)
		{
			std::cout << "Error: bad input => " << _input.at(i) << std::endl;
			continue;
		}

		int index = findDate(_input.at(i).substr(0, pos), data);

		if (index == -1)
			std::cout << "Error : date not found" << std::endl;
		else
		{
			float value = std::stof(data.at(index).substr(data.at(index).find(",") + 1));
			if (_exchange_rate.at(i) > 1000)
				std::cout << "Error: too large a number. " << std::endl;
			else
				std::cout << _input.at(i).substr(0, pos) << " => " <<  _exchange_rate.at(i) << " = " << value * _exchange_rate.at(i) << std::endl;

		}
	}
}
