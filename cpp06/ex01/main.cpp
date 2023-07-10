/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:30:56 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/10 13:44:20 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data *data = new Data();


	data->s1 = "Hello";
	data->n = 42;
	data->s2 = "World";
	
	std::cout << "Data: " << data << std::endl;

	uintptr_t raw = serialize(data);

	std::cout << "Raw: " << raw << std::endl;

	Data *data2 = deserialize(raw);

	std::cout << "Data2: " << data2 << std::endl;

	std::cout << "Data2->s1: " << data2->s1 << std::endl;
	std::cout << "Data2->n: " << data2->n << std::endl;
	std::cout << "Data2->s2: " << data2->s2 << std::endl;
	
	return (0);
	
}