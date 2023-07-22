/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 01:12:16 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/22 13:40:42 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>


class RPN
{
private:
	std::stack<int>		_stack;	
public:
	RPN(std::string input);
	~RPN();
	void 				operation(char c);
	int 				getResult() const;
};





#endif