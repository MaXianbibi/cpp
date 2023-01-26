/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 01:24:22 by jmorneau          #+#    #+#             */
/*   Updated: 2023/01/25 23:17:15 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./phonebook.hpp"

std::string &trunc(std::string &str)
{
	if (str.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

std::string get_input()
{
	std::string tmp;

	while (true)
	{
		std::cin >> tmp;
		if (!tmp.empty())
			return tmp;
		std::clearerr(stdin);
		std::cin.clear();
		std::cout << "Répondez." << std::endl;
	}
}

int get_index()
{
	int tmp;

	while (true)
	{
		std::cin >> tmp;
		if (tmp >= 0 && tmp <= 7)
			return (tmp);
		std::clearerr(stdin);
		std::cin.clear();
		std::cout << "Répondez. Sérieusement." << std::endl;
	}
}

information ft_add()
{
	information tmp;

	std::cout << "first name : ";
	tmp.first_name = get_input();

	std::cout << "last name : ";
	tmp.last_name = get_input();

	std::cout << "nickname : ";
	tmp.nickname = get_input();

	std::cout << "phone number : ";
	tmp.phone_number = get_input();

	std::cout << "darkest secret : ";
	tmp.darkest_secret = get_input();

	return (tmp);
}

void search(phonebook v)
{
	int i = 0;

	std::cout << "     Index|First Name| Last Name| Nick Name|Cell Phone|    Secret" << std::endl;
	while (i < 8)
	{
		std::cout << "         " << i << "|";
		if (!v.a[i].first_name.empty())
		{
			std::cout << std::right << std::setw(10) << trunc(v.a[i].first_name) << "|";
			std::cout << std::right << std::setw(10) << trunc(v.a[i].last_name) << "|";
			std::cout << std::right << std::setw(10) << trunc(v.a[i].nickname) << "|";
			std::cout << std::right << std::setw(10) << trunc(v.a[i].phone_number) << "|";
			std::cout << std::right << std::setw(10) << trunc(v.a[i].darkest_secret);
		}
		std::cout << std::endl;

		i++;
	}
	std::cout << "selecte index : ";
	i = get_index();

	if (!v.a[i].first_name.empty())
	{
		std::cout << "First name : " << v.a[i].first_name << std::endl;
		std::cout << "Last name : " << v.a[i].last_name << std::endl;
		std::cout << "Nick name : " << v.a[i].nickname << std::endl;
		std::cout << "Phone number : " << v.a[i].phone_number << std::endl;
		std::cout << "Darkest secret : " << v.a[i].darkest_secret << std::endl;
	}
	else
		std::cout << "Nothing at all" << std::endl;
}

int main()
{
	phonebook v;

	while (1)
	{
		std::string cmd;

		std::cin >> cmd;
		if (cmd == "EXIT" || cmd == "exit")
			return (0);
		if (cmd == "ADD" || cmd == "add")
			v.add(ft_add());
		else if (cmd == "SEARCH" || cmd == "search")
			search(v);
	}
}