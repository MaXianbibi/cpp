/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 01:12:31 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/22 14:04:15 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int isToken(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (1);
	return (0);
}

void RPN::operation(char c)
{
	int value2 = _stack.top();
	_stack.pop();
	int value1 = _stack.top();
	_stack.pop();
	if (c == '+')
		_stack.push(value1 + value2);
	else if (c == '-')
		_stack.push(value1 - value2);
	else if (c == '*')
		_stack.push(value1 * value2);
	else if(c == '/' && value2 != '0')
		_stack.push(value1 / value2);
	else 	
		throw "Invalid expression";
	
}

RPN::RPN(std::string input)
{
	if (input.length() == 0)
		throw "Empty string";
	for (size_t i = 0; i < input.length(); i++)
	{
		if (isdigit(input.at(i)))
			_stack.push(input.at(i) - '0');
		else if (isToken(input.at(i)))
			operation(input.at(i));
		else if (isspace(input.at(i)))
			continue ;
		else
			throw "Invalid character";
	}
	if (_stack.size() != 1)
		throw "Invalid expression";
}

int RPN::getResult() const
{
	return (_stack.top());
}

RPN::~RPN()
{
}