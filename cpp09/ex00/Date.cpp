/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:46:02 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/20 22:18:36 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Date.hpp"

Date::Date()
{
	_year = 2008;
	_month = 1;
	_day = 1;
}

Date::Date(std::string date)
{
	std::stringstream ss(date);
    std::string item;
	
    while (std::getline(ss, item, '-')) {
		_date.push_back(item);
    }
	
	_year = std::stoi(_date[0]);
	_month = std::stoi(_date[1]);
	_day = std::stoi(_date[2]);
}

Date::~Date()
{
}

std::string Date::getDate(void) const
{
	return std::string(_date[0] + "-" + _date[1] + "-" + _date[2]);
}

uint32_t Date::getYear(void) const
{
	return (_year);
}

uint32_t Date::getMonth(void) const
{
	return (_month);
}

uint32_t Date::getDay(void) const
{
	return (_day);
}


int compareDate(const Date &date1, const Date &date2)
{
	if (date1.getYear() > date2.getYear())
		return (-1);
	else if (date1.getYear() < date2.getYear())
		return (1);
	else if (date1.getMonth() > date2.getMonth())
		return (-1);
	else if (date1.getMonth() < date2.getMonth())
		return (1);
	else if (date1.getDay() > date2.getDay())
		return (-1);
	else if (date1.getDay() < date2.getDay())
		return (1);
	return (0);
}
