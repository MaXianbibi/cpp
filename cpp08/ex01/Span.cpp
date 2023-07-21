/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:30:10 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/11 15:56:23 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size) : _size(size)
{
	_array.reserve(_size);
}

Span::~Span()
{
}

Span::Span(Span const &p)
{
	*this = p;
}

Span &Span::operator=(Span const &p)
{
	_size = p._size;
	_array = p._array;
	return (*this);
}


void Span::addNumber(int n)
{
	if (_array.size() < _size)
		_array.push_back(n);
	else
		throw std::out_of_range("Array is full");
}

int Span::shortestSpan(void)
{
	if (_array.size() < 2)
		throw std::out_of_range("Not enough elements");
	std::vector<int> copy(_array);
	std::sort(copy.begin(), copy.end());
	int min = copy[1] - copy[0];


	for (unsigned int i = 1; i < copy.size(); i++)
	{
		if (copy[i] - copy[i - 1] < min)
			min = copy[i] - copy[i - 1];
	}
	return (min);
}

int Span::longestSpan(void)
{
	if (_array.size() < 2)
		throw std::out_of_range("Not enough elements");
	std::vector<int> copy(_array);
	std::sort(copy.begin(), copy.end());
	return (copy[copy.size() - 1] - copy[0]);
}

void Span::fillArray(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin; it != end; it++)
	{
			addNumber(*it);
	}
}