/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:26:32 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/11 15:55:54 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span
{
private:
	std::vector<int> _array;
	unsigned int _size;
public:
	Span(unsigned int size);
	~Span();
	Span(Span const &p);
	Span &operator=(Span const &p);
	

	void addNumber(int n);
	int shortestSpan(void);
	int longestSpan(void);

	void fillArray(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};


#endif