/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:45:43 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/20 21:58:58 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATE_HPP
# define DATE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

class Date
{
private:
	std::vector<std::string> _date;
	
	uint32_t _year;
	uint32_t _month;
	uint32_t _day;
public:
	Date(std::string date);
	Date();
	~Date();

	std::string getDate(void) const;
	uint32_t getYear(void) const;
	uint32_t getMonth(void) const;
	uint32_t getDay(void) const;

	
};

int compareDate(const Date &date1, const Date &date2);

#endif