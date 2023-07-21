/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:12:37 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/19 16:34:54 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	MutantStack() : std::stack<T>() {};
	MutantStack(MutantStack const & src) : std::stack<T>(src) {};
	~MutantStack() {};

	typedef typename std::deque<T>::iterator iterator;
	iterator begin(void)
	{
		return (this->c.begin());
	}

	iterator end(void)
	{
		return (this->c.end());
	}
};




#endif